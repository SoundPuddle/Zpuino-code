#include "soundpuddle.h"
HardwareSerial uart2(12); // init the UART2 HDL module, connect the MCU to ZPUino IO slot 12

// System control
int sysdelay = 1; // main while loop delay in (uS)
int vis_mode = 'V'; // variable for visualization switch mode (0=debug, R=ripple, S=spiral, V=VU mmeter, C=solid color)
volatile int uartcommand = 1; // this variable holds the serial command from the BT application. TODO replace me with a better infrastructure

// ADC and FFT configuration
int fft_div = 4; // this variable controls how many FFTs are run within one complete sample window (complete sample window == (1/samplerate) * FFT_size)), valid options = (1,2,4,8)
int fft_subwindowsize = FFT_SIZE/fft_div;
volatile int fft_buffer_ready = 0;
volatile int adc_channel = DEFAULT_ADC_CHANNEL; // specify the ADC channel, can be changed during run-time
volatile unsigned int adc_buffer_ptr; // pointer for the current ADC sample
volatile int adc_buffer_ready = 0; // flag to indicate status of the ADC sampling period
volatile int adc_buffer_quarter = 0; // flag to indicate what quarter the adc buffer is in (first, second, third, first)
static int adc_buffer[FFT_SIZE]; // this array contains the input from the ADC, it is what the interrupt function writes into
unsigned long led_buffer[SPOKEBUFFERSIZE][NUMSPOKES]; // [position of LED on its strip + 1 for start + 1 for stop][which strip amongst the circle]
// volatile unsigned fft_buffer_map[NUMSPOKES]={23,24,26,27,29,31,33,35,37,39,41,44}; // this array defines which bin of the FFT will be selected for visualization
unsigned fft_output_buffer[FFT_SIZE/2]; // this array contains the full output of the FFT
int fft_input_buffer[FFT_SIZE]; // this array contains the ADC input values for the FFT
typedef FFT_256 FFT_type;
static FFT_type myfft;
extern unsigned int window[];
extern "C" unsigned fsqrt16(unsigned); // this is in fixedpoint.S

volatile uint8_t r = 0x00; // red channel for the current LED (0-255 range, truncated for 7-bit the LPD8806)
volatile uint8_t g = 0x00; // green channel for the current LED (0-255 range, truncated for 7-bit the LPD8806)
volatile uint8_t b = 0x00; // blue channel for the current LED (0-255 range, truncated for 7-bit the LPD8806)
volatile uint8_t r_command = 0x0; // temporary variable to hold an incoming "r" command recieved from the serial interface
volatile uint8_t g_command = 0x0; // temporary variable to hold an incoming "g" command recieved from the serial interface
volatile uint8_t b_command = 0x0; // temporary variable to hold an incoming "b" command recieved from the serial interface
volatile uint8_t uartcommands[3]; // temporary variable array, used in converting three ascii bytes to a three digit number
volatile uint8_t global = 0x1F; // global brightness control for the current LED (0-31 range, unused for the LPD8806)

// lookup table generation function
extern void make_rgb_lut(float hue_offset, float hsvalue_floor, float rgain, float ggain, float bgain, int rgb_max);

// FPGA configuration
#define HWMULTISPIBASE IO_SLOT(14)
#if 0

#define SPI3BASE  IO_SLOT(8)
#define SPI3CTL  REGISTER(SPI3BASE,0)
#define SPI3DATA REGISTER(SPI3BASE,1)
void init_rgb()
{
SPI3CTL=BIT(SPICPOL)|BIT(SPISRE)|BIT(SPIEN)|BIT(SPIBLOCK)|BIT(SPICP2)|BIT(SPICP0);
}
unsigned rgboff=0;
void rgb_latch(unsigned n)
{
n = ((n + 63) / 64) * 3;
while(n--) {SPI3DATA=0};
}
#endif


// this function 
void init_multispi() {
    REGISTER(HWMULTISPIBASE,1)= (unsigned long)&ledmapping[0]; // SPI flash offset
    REGISTER(HWMULTISPIBASE,2)= (unsigned long)&led_buffer[0];//(unsigned)&myfft.in_real[0].v; // base memory address
    // Writing direct mapping at 5076  - we use this /3 minus one
    REGISTER(HWMULTISPIBASE,3)= DIRECTMAP_OFFSET;
    REGISTER(HWMULTISPIBASE,4)= 0x54 ;
}

void multispi_start() {
    led_output_prep(); // put the LED start and stop frames into the led_buffer[]
    delayMicroseconds(1); // this delay was added experimentally, the system hangs if there is no delay at all (VHD timing issue? TODO: debug)
    REGISTER(HWMULTISPIBASE,0)=1;
}
void init_adc() {
    adc_buffer_ptr = 0;
    pinMode(ADC_MOSI,   OUTPUT);
    pinMode(ADC_SCK,    OUTPUT);
    pinMode(ADC_CS,    OUTPUT);
    pinMode(ADC_MISO,   INPUT);
    pinModePPS(ADC_MOSI,HIGH); // peripheral pin select mode for HDL interface to SPI module
    pinModePPS(ADC_SCK, HIGH); // peripheral pin select mode for HDL interface to SPI module
    digitalWrite(ADC_CS,HIGH);
    outputPinForFunction(ADC_MOSI, IOPIN_USPI_MOSI); 
    outputPinForFunction(ADC_SCK, IOPIN_USPI_SCK);
    inputPinForFunction(ADC_MISO, IOPIN_USPI_MISO);
    /* CP1 -> 010 prescaler (4), frequency 24MHz) */
    USPICTL=BIT(SPICPOL)|BIT(SPISRE)|BIT(SPIEN)|BIT(SPIBLOCK)|BIT(SPICP1)|BIT(SPICP0);
    // Start reading immediatly */
    digitalWrite(ADC_CS,LOW);
    //USPIDATA16 = 0;
    USPIDATA = 0;
    USPIDATA = 0; // This line was added twice experimentally, not sure why it is needed for stable init. TODO: figure out why
    /* Set up timer for a DEFAULT_SAMPLING_FREQ frequency */
    TMR0CTL = 0;
    TMR0CNT = 0;
    TMR0CMP = (CLK_FREQ / DEFAULT_SAMPLING_FREQ )- 1;
    TMR0CTL = _BV(TCTLENA)|_BV(TCTLCCM)|_BV(TCTLDIR)| _BV(TCTLIEN);
    INTRMASK = _BV(INTRLINE_TIMER0); // Enable Timer0 interrupt
    INTRCTL=1;  /* Enable interrupts */
}

void init_uart2() {
    pinMode(SP_MK2_UART2TX_PIN, OUTPUT); // UART2 TX pin for BT module communication
    pinModePPS(SP_MK2_UART2TX_PIN, HIGH); // Turn on the TX pin
    outputPinForFunction(SP_MK2_UART2TX_PIN, 6); // Map output PP6 to the physical pin
    pinMode(SP_MK2_UART2RX_PIN, INPUT); // UART2 RX pin for BT module communication
    inputPinForFunction(SP_MK2_UART2RX_PIN, 1); // Map input PP1 to the physical pin
    uart2.begin(115200); // set the baud rate
    //uart2.println("Starting");
}

// This function writes the LED start and stop frames to the LED memory space
void led_writeall(uint8_t r_val, uint8_t g_val, uint8_t b_val, uint8_t global_val) {
    // LED data frames
    int i,j;
    // start after the first entry (which is the ledstart frame), end before the last frame (ledstop)
    for (i = 1; i < (SPOKEBUFFERSIZE); i++) {
        // increment through each spoke
        for (j = 0; j < (NUMSPOKES); j++) {
            led_buffer[i][j] = assemble_ledframe(r_val, g_val, b_val, global_val);
        }
    }
    multispi_start();
}

// This function writes the LED start and stop frames to the LED memory space
void led_output_prep() {
    int i,j;
    // put start and stop frames into LED memory space
    for (i = 0; i < (NUMSPOKES); i++) {
        // the first frame for each spoke
        led_buffer[0][i] = ledstart;
        //         led_buffer[SPOKEBUFFERSIZE-1][i] = ledstop; // it seems like the APA102c doesn't need this stop frame
    }
}

// This function uses the FFT bin defined by fft_output_buffer[] and uses their magnitude to index the HSV lookup table, putting the result into led_buffer[]
void led_writefft(uint8_t global_val) {
    if (fft_buffer_ready == 1) {
        // LED data frames
        int i,j;
        for (i = 1; i < (SPOKEBUFFERSIZE); i++) {
            for (j = 0; j < (NUMSPOKES); j++) {
                led_buffer[i][j] = assemble_ledframe(fft_output_buffer[j], 0, 0, global_val);
            }
        }
        fft_buffer_ready = 0;
        multispi_start();
    }
}

// FFT sample acquisition interrupt function.
void _zpu_interrupt() {
    if (adc_buffer_ready == 0) { // Just to make sure we don't overwrite buffer while we copy it.
        FFT_type::fixed fv;
        FFT_type::fixed winv;
//         fv.v = ((int)(USPIDATA & 0xffff)-2047);
//         Serial.print("A");
//         Serial.print((int)(USPIDATA & 0xffff)-2047);
//         Serial.println();
        // Multiply by window
//         winv.v = window[adc_buffer_ptr];
//         adc_buffer[adc_buffer_ptr] = winv.v;
        // Advance file
        adc_buffer[adc_buffer_ptr] = ((int)(USPIDATA & 0xffff)-2047);
        SPIDATA32 = 0;
        fv *= winv;
//         USPIDATA16 = 0; // Start reading next sample
        adc_buffer_ptr++;
        if (adc_buffer_ptr > (fft_subwindowsize)) {
            adc_buffer_ready = 1;
            adc_buffer_ptr = 0;
//             digitalWrite(SP_MK2_GPIO, HIGH);
//             digitalWrite(SP_MK2_GPIO, LOW);
        }
    }
    USPIDATA16 = (adc_channel << 11); // Start reading next sample
    TMR0CTL &= ~(BIT(TCTLIF));
}

void perform_fft() {
    int i = 0;
    if (adc_buffer_ready == 1) {
        if (fft_div > 1) { // shift the input array if we are doing sub-window FFTs
            for (i = 0; i < (FFT_SIZE - fft_subwindowsize); i++) {
                fft_input_buffer[FFT_SIZE - 1 - i] = fft_input_buffer[FFT_SIZE - fft_subwindowsize - 1 - i];
            }
            for (i = 0; i < fft_subwindowsize; i++) {
                fft_input_buffer[i] = adc_buffer[i];
            }
//     Serial.print(adc_buffer[0]);
//     Serial.print(";");
//     Serial.print(adc_buffer[31]);
//     Serial.print(";");
//     Serial.print(adc_buffer[63]);
//     Serial.print(";");
//     Serial.print(adc_buffer[95]);
//     Serial.print(";");
//     Serial.print(adc_buffer[127]);
//     Serial.print(";;;");
//     Serial.print(fft_input_buffer[0]);
//     Serial.print(";");
//     Serial.print(fft_input_buffer[63]);
//     Serial.print(";");
//     Serial.print(fft_input_buffer[127]);
//     Serial.print(";");
//     Serial.print(fft_input_buffer[191]);
//     Serial.print(";");
//     Serial.print(fft_input_buffer[255]);
//     Serial.print(";");
//     Serial.print(millis());
//     Serial.println();
        }
        digitalWrite(SP_MK2_GPIO, HIGH);
        int i;
        fft_buffer_ready = 0;
        //move the ADC buffer to the FFT real input
        for (i=0; i<FFT_SIZE; i++) {
            myfft.in_real[i].v= fft_input_buffer[i];
            myfft.in_im[i].v=0;
        }
        adc_buffer_ready = 0; // we're done with this ADC buffer window, enable sampling for the next window
        myfft.doFFT();
        // this for loop can run the entire length of FFT_SIZE/2, or an abbreviated length of only the BIN we're interested in for the visualization application
        for (i=0; i<(FFT_SIZE/2); i++) {
            FFT_type::fixed v = myfft.in_real[i];
            v.v>>=2;
            v *= v;
            FFT_type::fixed u = myfft.in_im[i];
            u.v>>=2;
            u *= u;
            v += u;
            v.v = fsqrt16(v.asNative());
            fft_output_buffer[i] = v.v >> 8;
        }
        fft_buffer_ready = 1;
        digitalWrite(SP_MK2_GPIO, LOW);
//         for (i=0; i<(FFT_SIZE); i++) {
//             Serial.print(fft_input_buffer[i]);
//             Serial.print(";");
//         }
//         Serial.println();
    }
}

void init_usbserial() {
    Serial.begin(115200);
    Serial.println("Init");
}

void init_leds() {
    led_writeall(0,0,0,global); // make sure the LED arrays init at 0
    init_multispi(); // setup the HDL multi-channel SPI module to access MCU memory space
}

// this function reads three ascii bytes off the serial port and assembles one integer [ex: ascii('1' '0' '2') -> int(102)]
int read3charmakeint() {
    int command;
    int i = 0;
    for (i = 0; i < 3; i++) {
        uartcommands[i] = (int)uart2.read() - (int)48; // assume incoming byte is an ascii number (0 - 9), turn it into an int
    }
    command = (uartcommands[0]*100)+(uartcommands[1]*10)+(uartcommands[2]); // assembly a three digit int (0-999) from thee incoming ascii chars
    return(command);
}

int checkuartstop() {
//     delayMicroseconds(500);
    if (uart2.read() == '#') {
        return 1;
    }
    else {
        return 0;
    }
}

// this function parses an incoming serial packet, returns 1 on success and 0 on an error
int read_uart_command() {
    if (uart2.available() > 0) {
        delayMicroseconds(800); // we don't want to get ahead of the incoming packet, which is slow (115200 baud) TODO: make this a timer for a flag, rather than a no-op delay
        switch (uart2.read()) { // this switch case is layer 1
            default: // the default case (if the incoming byte does not match a defined command) is to return an error
                return 0;
                break;
            case 'M': // mode
                uart2.print("M");
                switch (uart2.read()) { // this switch case parses options for the application "mode"
                    case 'R': // ripple mode
                        uart2.print("R");
                        break;
                    case 'S': // spiral mode
                        uart2.print("S");
                        break;
                    case 'I': // ring mode
                        uart2.print("I");
                        break;
                    case 'V': // VU mode
                        uart2.print("V");
                        switch (uart2.read()) { // this switch case for solid-color mode options
                            case 'E': // mode
                                uart2.print("E");
                                // verify that we read the stop byte, and this was a valid packet. If so act on the command
                                if (checkuartstop() == 0) {return 0;} // verify that we read the stop byte. If valid, continue function, if invalid return error
                                vis_mode = 'V'; // set the mode to "solid color"
                                break;
                        }
                        break;
                    case 'C': // solid color mode
                        uart2.print("C");
                        switch (uart2.read()) { // this switch case for solid-color mode options
                            case 'E': // mode
                                uart2.print("E");
                                // verify that we read the stop byte, and this was a valid packet. If so act on the command
                                if (checkuartstop() == 0) {return 0;} // verify that we read the stop byte. If valid, continue function, if invalid return error
                                vis_mode = 'C'; // set the mode to "solid color"
                                break;
                            case 'R': // RGB
                                uart2.print("R");
                                r_command = read3charmakeint();
                                g_command = read3charmakeint();
                                b_command = read3charmakeint();
                                if (checkuartstop() == 0) {return 0;} // verify that we read the stop byte. If valid, continue function, if invalid return error
                                uart2.print("#");
                                r = r_command;
                                g = g_command;
                                b = b_command;
                                break;
                            case 'H': // HSV
                                uart2.print("H");
                                // TODO add HSV control option
                                break;
                        }
                        break;
                }
                break;
            case 'H': // HSV
                uart2.print("H");
                break;
            case 'F': // FFT
                uart2.print("F");
                break;
            case 'A': // ADC
                uart2.print("A");
                break;
        }
    }
}

void setup() {
    init_adc(); // start the interrupt timer and SPI communication with the external ADC
    init_leds(); // setup the LED and color arrays
    init_usbserial(); // turn on the ZPUino serial port connected to FTDI>USB
    init_uart2(); // turn on the UART connected to the WT32 Bluetooth module
    //make_rgb_lut(hue_offset, hsvalue_floor, rgain, ggain, bgain, rgb_max);
    pinMode(SP_MK2_GPIO, OUTPUT);
}

void loop() {
    read_uart_command();
    // switch to select the visualization mode
    switch (vis_mode) {
        // debug case, bring solid color
        case 'R': // ripple mode case "soundpuddle classic" TODO finish this
            break;
        case 'S': // spiral mode
            break;
        case 'I': // ring mode
            break;
        case 'V': // VU meter mode
            perform_fft();
            led_writefft(global);
            break;
        case 'C': // solid-color mode
            led_writeall(r,g,b,global);
            break;
        default:
            uart2.print("DEFAULT CASE");
            break;
    }
    delayMicroseconds(sysdelay);
//     digitalWrite(SP_MK2_GPIO, HIGH);
//     int qq;
//     for (qq=0; qq < FFT_SIZE/8; qq++) {
//         Serial.print(adc_buffer[0]);
//         Serial.println();
//     }
//     digitalWrite(SP_MK2_GPIO, LOW);
}