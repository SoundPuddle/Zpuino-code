#include "soundpuddle.h"

extern unsigned int window_blackman256[];
extern unsigned int simple_gamma[];

HardwareSerial uart2(12); // init the UART2 HDL module, connect the MCU to ZPUino IO slot 12

// System control
int sysdelay = 1; // main while loop delay in (uS)
int vis_mode = 'R'; // variable for visualization switch mode (0=debug, R=ripple, S=spiral, V=VU mmeter, C=solid color)
volatile int uartcommand = 1; // this variable holds the serial command from the BT application. TODO replace me with a better infrastructure

// ADC and FFT configuration
float adc_gain = 1;
int fft_div = 12; // this variable controls how many FFTs are run within one complete sample window (complete sample window == (1/samplerate) * FFT_size)), valid options = (1,2,4,8)
int fft_subwindowsize = FFT_SIZE/fft_div;
volatile int fft_buffer_ready = 0;
volatile int adc_channel = DEFAULT_ADC_CHANNEL; // specify the ADC channel, can be changed during run-time
volatile unsigned int adc_buffer_ptr; // pointer for the current ADC sample
volatile int adc_buffer_ready = 0; // flag to indicate status of the ADC sampling period
volatile int adc_buffer_quarter = 0; // flag to indicate what quarter the adc buffer is in (first, second, third, first)
volatile int adc_buffer[FFT_SIZE]; // this array contains the input from the ADC, it is what the interrupt function writes into
unsigned long led_buffer[SPOKEBUFFERSIZE][NUMSPOKES]; // [position of LED on its strip + 1 for start + 1 for stop][which strip amongst the circle]
// static int fft_bin_map[] = {11, 17, 18, 19, 20, 21, 23, 24, 25, 27, 29, 30, 32, 34, 36, 38, 41, 43, 46, 48, 51, 54, 65, 69, 73, 77, 82, 87, 92, 97, 103, 109, 116, 123, 118, 116, 115, 114, 114, 114, 115, 107, 119, 112, 111};
int fft_input_buffer[FFT_SIZE]; // this array contains the ADC input values for the FFT
FFT_type myfft;
extern unsigned int hsv_table[];
extern "C" unsigned fsqrt16(unsigned); // this is in fixedpoint.S

// hsv control

uint8_t r = 0x00; // red channel for the current LED (0-255 range, truncated for 7-bit the LPD8806)
uint8_t g = 0x10; // green channel for the current LED (0-255 range, truncated for 7-bit the LPD8806)
uint8_t b = 0x00; // blue channel for the current LED (0-255 range, truncated for 7-bit the LPD8806)
volatile uint8_t global = 0x1F; // global brightness control for the current LED (0-31 range, unused for the LPD8806)


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
            led_buffer[i][j] = assemble_apa102_ledframe(r_val, g_val, b_val, global);
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
        led_buffer[0][i] = ledstart; //used for the APA102
        //         led_buffer[SPOKEBUFFERSIZE-1][i] = ledstop; // it seems like the APA102c doesn't need this stop frame
    }
}

// This function uses the FFT bin defined by fft_output_buffer[] and uses their magnitude to index the HSV lookup table, putting the result into led_buffer[]
void led_writefft_vu(uint8_t global_val) {
    if (fft_buffer_ready == 1) {
//         digitalWrite(SP_MK2_GPIO, HIGH);
        // LED data frames
        int i,j;
        for (i = 1; i < (SPOKEBUFFERSIZE); i++) {
            for (j = 0; j < (NUMSPOKES); j++) {
                led_buffer[i][j] = hsv_table[fft_output_buffer[i]];
            }
        }
        fft_buffer_ready = 0;
        multispi_start();
//         digitalWrite(SP_MK2_GPIO, LOW);
    }
}

void led_write_fftmap_ripple(uint8_t global_val) {
    if (fft_buffer_ready == 1) {
        digitalWrite(SP_MK2_GPIO, HIGH);
        // LED data frames
        int i,j;
        for (i = 0; i < (SPOKEBUFFERSIZE-1); i++) {
            for (j = 0; j < (NUMSPOKES); j++) {
                led_buffer[SPOKEBUFFERSIZE-1-i][j] = led_buffer[SPOKEBUFFERSIZE-2-i][j];
            }
        }
        for (i = 0; i < (NUMSPOKES); i++) {
            led_buffer[1][i] = hsv_table[fft_mapped_buffer[i]];
        }
        digitalWrite(SP_MK2_GPIO, LOW);
        fft_buffer_ready = 0;
        multispi_start();
    }
}

void led_writefft_ripple(uint8_t global_val) {
    if (fft_buffer_ready == 1) {
//         digitalWrite(SP_MK2_GPIO, HIGH);
        // LED data frames
        int i,j;
        digitalWrite(SP_MK2_GPIO, HIGH);
        for (i = 0; i < (SPOKEBUFFERSIZE-1); i++) {
            for (j = 0; j < (NUMSPOKES); j++) {
                led_buffer[SPOKEBUFFERSIZE-1-i][j] = led_buffer[SPOKEBUFFERSIZE-2-i][j];
            }
        }
        for (i = 0; i < (NUMSPOKES); i++) {
            led_buffer[1][i] = hsv_table[fft_output_buffer[i]];
        }
        digitalWrite(SP_MK2_GPIO, HIGH);
        fft_buffer_ready = 0;
        multispi_start();
//         digitalWrite(SP_MK2_GPIO, LOW);
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
        winv.v = window_blackman256[adc_buffer_ptr];
//         adc_buffer[adc_buffer_ptr] = winv.v;
        // Advance file
        adc_buffer[adc_buffer_ptr] = adc_gain * ((int)(USPIDATA & 0xffff)-2047); // apply the floating-point gain and store the value TODO: Make this an integer operation to improve speed
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

void init_usbserial() {
    Serial.begin(115200);
//     Serial.println("Init");
}

void init_leds() {
    led_writeall(0,0,0,global); // make sure the LED arrays init at 0
    init_multispi(); // setup the HDL multi-channel SPI module to access MCU memory space
}


void setup() {
    init_adc(); // start the interrupt timer and SPI communication with the external ADC
    init_leds(); // setup the LED and color arrays
    init_usbserial(); // turn on the ZPUino serial port connected to FTDI>USB
    init_uart2(); // turn on the UART connected to the WT32 Bluetooth module
    make_rgb_lut(0, 230, 0, 127, 32, global);
    pinMode(SP_MK2_GPIO, OUTPUT);
//     digitalWrite(SP_MK2_GPIO, HIGH);
}

void loop() {
    read_uart_command();
    // switch to select the visualization mode
    switch (vis_mode) {
        // debug case, bring solid color
        case 'R': // ripple mode case "soundpuddle classic" TODO finish this
//             perform_fft();
            perform_fft_mapped();
//             led_writefft_ripple(global);
            led_write_fftmap_ripple(global);
            break;
        case 'S': // spiral mode
            break;
        case 'I': // ring mode
            break;
        case 'V': // VU meter mode
            perform_fft();
            led_writefft_vu(global);
            break;
        case 'C': // solid-color mode
            led_writeall(r,g,b,global);
            break;
        case 'P': // pause mode
            // pause (do nothing)
            break;
        default:
//             uart2.print("DEFAULT CASE");
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