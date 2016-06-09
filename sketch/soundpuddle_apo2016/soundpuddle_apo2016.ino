#include "soundpuddle.h"

HardwareSerial uart2(12); // init the UART2 HDL module, connect the MCU to ZPUino IO slot 12

// System control
int sysdelay = 1; // main while loop delay in (uS)
int vis_mode = 'R'; // variable for visualization switch mode (0=debug, R=ripple, S=spiral, V=VU mmeter, C=solid color)
volatile int uartcommand = 1; // this variable holds the serial command from the BT application. TODO replace me with a better infrastructure

// ADC and FFT configuration
float adc_gain = 20;
int fft_div = 8; // this variable controls how many FFTs are run within one complete sample window (complete sample window == (1/samplerate) * FFT_size)), valid options = (1,2,4,8)
int fft_subwindowsize = FFT_SIZE/fft_div;
volatile int fft_buffer_ready = 0;
volatile int adc_channel = DEFAULT_ADC_CHANNEL; // specify the ADC channel, can be changed during run-time
volatile unsigned int adc_buffer_ptr; // pointer for the current ADC sample
volatile int adc_buffer_ready = 0; // flag to indicate status of the ADC sampling period
volatile int adc_buffer[FFT_SIZE]; // this array contains the input from the ADC, it is what the interrupt function writes into
int fft_input_buffer[FFT_SIZE]; // this array contains the ADC input values for the FFT
FFT_type myfft;

volatile uint8_t global = 0x1F; // global brightness control for the current LED (0-31 range, unused for the LPD8806)

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
//     init_fft_bin_map; // setup the FFT bin mapping array
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
            led_writefftmap_ripple(global);
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