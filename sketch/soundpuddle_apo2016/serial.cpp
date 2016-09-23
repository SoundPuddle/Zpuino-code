#include "serial.h"

// void init_usbserial() {
//     Serial.begin(115200);
//     Serial.println("Init");
// }

extern HardwareSerial uart2; // init the UART2 HDL module, connect the MCU to ZPUino IO slot 12
extern int vis_mode;
uint8_t r_temp;
uint8_t g_temp;
uint8_t b_temp;
volatile uint16_t hue_min_command;
volatile uint16_t hue_max_command;
volatile uint16_t val_min_command;
volatile uint16_t val_max_command;
extern float adc_gain;
volatile uint16_t adc_gain_command;
extern int adc_channel;
extern int fft_bin_map[];
extern int fft_bin_buffer_used;
volatile int fft_bin_buffer_used_command;

uint16_t r_command = 0x0; // temporary variable to hold an incoming "r" command recieved from the serial interface
uint16_t g_command = 0x0; // temporary variable to hold an incoming "g" command recieved from the serial interface
uint16_t b_command = 0x0; // temporary variable to hold an incoming "b" command recieved from the serial interface
extern uint8_t global;

volatile uint16_t uartcommands[3]; // temporary variable array, used in converting three ascii bytes to a three digit number


int checkuartstop() {
    //     delayMicroseconds(500);
    if (uart2.read() == '#') {
        return 1;
    }
    else {
        return 0;
    }
}


// this function reads three ascii bytes off the serial port and assembles one integer [ex: ascii('1' '0' '2') -> int(102)]
int read3charmakeint() {
    int command;
    int i = 0;
    for (i = 0; i < 3; i++) {
        uartcommands[i] = (int)uart2.read() - (int)48; // assume incoming byte is an ascii number (0 - 9), turn it into an int
    }
    command = (uartcommands[0]*100)+(uartcommands[1]*10)+(uartcommands[2]); // assemble a three digit int (0-999) from thee incoming ascii chars
    return(command);
}

// this function reads three ascii bytes off the serial port and assembles one integer [ex: ascii('1' '0' '2') -> int(102)]
int read4charmakeint() {
    int command;
    int i = 0;
    for (i = 0; i < 4; i++) {
        uartcommands[i] = (int)uart2.read() - (int)48; // assume incoming byte is an ascii number (0 - 9), turn it into an int
    }
    command = (uartcommands[0]*1000)+(uartcommands[1]*100)+(uartcommands[2]*10)+(uartcommands[3]); // assemble a three digit int (0-999) from thee incoming ascii chars
    return(command);
}

// this function parses an incoming serial packet, returns 1 on success and 0 on an error
int read_uart_command() {
    if (uart2.available() > 0) {
        delayMicroseconds(1200); // we don't want to get ahead of the incoming packet, which is slow (115200 baud) TODO: make this a timer for a flag, rather than a no-op delay
        switch (uart2.read()) { // this switch case is layer 1
            default: // the default case (if the incoming byte does not match a defined command) is to return an error
                return 0;
                break;
            case 'M': // mode
                uart2.print("M");
                switch (uart2.read()) { // this switch case parses options for the application "mode"
                    case 'R': // ripple mode
                        uart2.print("R");
                        switch (uart2.read()) { // this switch case for solid-color mode options
                            case 'E': // mode
                                uart2.print("E");
                                // verify that we read the stop byte, and this was a valid packet. If so act on the command
                                if (checkuartstop() == 0) {return 0;} // verify that we read the stop byte. If valid, continue function, if invalid return error
                                vis_mode = 'R'; // set the mode to "solid color"
                                break;
                            case 'D': // toggle decay mode
                                uart2.print("D");
                                // verify that we read the stop byte, and this was a valid packet. If so act on the command
                                if (checkuartstop() == 0) {return 0;} // verify that we read the stop byte. If valid, continue function, if invalid return error
                                if (decay_enable == 1) {decay_enable = 0;}
                                else if (decay_enable == 0) {decay_enable = 1;}
                                else {decay_enable = 0;}
                                break;
                        }
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
                            case 'H': // use the HSV min/max comm format to set a specific color (uses the max values, ignores the min values)
                                uart2.print("H");
                                hue_min_command = read3charmakeint() - 100; // offset 100 for ascii conversion convenience (force transmission of 3 chars)
                                hue_max_command = read3charmakeint() - 100; // offset 100 for ascii conversion convenience (force transmission of 3 chars)
                                val_min_command = read3charmakeint() - 100; // offset 100 for ascii conversion convenience (force transmission of 3 chars)
                                val_max_command = read3charmakeint() - 100; // offset 100 for ascii conversion convenience (force transmission of 3 chars)
                                if (checkuartstop() == 0) {return 0;}
                                uart2.print("#");
                                float hue_command = (float)hue_max_command/255.0;
                                float val_command = (float)val_max_command/255.0;
                                hsv2rgb(hue_command,1,val_command,r_temp,g_temp,b_temp);
                                r = r_temp;
                                g = g_temp;
                                b = b_temp;
//                                 vis_mode = 'C'; // set the mode to "solid color"
                                break;
                                }
                                break;
                            case 'P': // VU mode
                                uart2.print("P");
                                switch (uart2.read()) { // this switch case for solid-color mode options
                                    case 'E': // mode
                                        uart2.print("E");
                                        // verify that we read the stop byte, and this was a valid packet. If so act on the command
                                        if (checkuartstop() == 0) {return 0;} // verify that we read the stop byte. If valid, continue function, if invalid return error
                                        vis_mode = 'P'; // set the mode to "pause"
                                        break;
                                }
                }
                break;
            case 'H': // HSV
                uart2.print("H");
                switch (uart2.read()) { // this switch case for solid-color mode options
                case 'M': // "mapping" control, recalc the HSV lookup table based on min/max inputs
                    uart2.print("M");
                    hue_min_command = read3charmakeint() - 100; // offset 100 for ascii conversion convenience (force transmission of 3 chars)
                    hue_max_command = read3charmakeint() - 100; // offset 100 for ascii conversion convenience (force transmission of 3 chars)
                    val_min_command = read3charmakeint() - 100; // offset 100 for ascii conversion convenience (force transmission of 3 chars)
                    val_max_command = read3charmakeint() - 100; // offset 100 for ascii conversion convenience (force transmission of 3 chars)
                    if (checkuartstop() == 0) {return 0;}
                    uart2.print("#");
                    make_rgb_lut(hue_min_command, hue_max_command, val_min_command, val_max_command, 32, global);
                    //(0, 230, 0, 127, 32, global)
                    break;
                }
                break;
            case 'F': // FFT
                uart2.print("F");
                switch (uart2.read()) {
                case 'S': // size
                    uart2.print("S");
                    fft_bin_buffer_used_command = read3charmakeint() - 100; // offset 100 for ascii conversion convenience (force transmission of 3 chars)
                    if (checkuartstop() == 0) {return 0;}
                    uart2.print("#");
                    fft_bin_buffer_used = fft_bin_buffer_used_command/100.0;
                    uart2.print(fft_bin_buffer_used);
                    break;
                case 'M': // map
                    uart2.print("M");
                    int mapping_read_complete = 0;
                    int mapping_read_index = 0;
                    int mapping_read_command = 0;
                    while (mapping_read_complete == 0) {
                        mapping_read_command = read4charmakeint() - 1000; // offset 100 for ascii conversion convenience (force transmission of 3 chars)
                        if (mapping_read_command == 8999) {return 0;} // check for the stop command
                        else {fft_bin_map[mapping_read_index] = mapping_read_command;}
                        mapping_read_index++;
                    }
                    break;
                }
                break;
            case 'G': // Global config
                uart2.print("G");
                switch (uart2.read()) {
                case 'G': // gain
                    uart2.print("G");
                    adc_gain_command = read3charmakeint() - 100; // offset 100 for ascii conversion convenience (force transmission of 3 chars)
                    if (checkuartstop() == 0) {return 0;}
                    uart2.print("#");
                    adc_gain = adc_gain_command/10.0;
                    uart2.print(adc_gain);
                    break;
                case 'C': // channel
                    uart2.print("C");
                    if (checkuartstop() == 0) {return 0;} // verify that we read the stop byte. If valid, continue function, if invalid return error
                    if (adc_channel == 0x01) {adc_channel = 0x02;}
                    else if (adc_channel == 0x02) {adc_channel = 0x01;}
                    else {adc_channel = DEFAULT_ADC_CHANNEL;}
                    break;
                case 'D': // toggle visualization direction
                    uart2.print("D");
                    // verify that we read the stop byte, and this was a valid packet. If so act on the command
                    if (checkuartstop() == 0) {return 0;} // verify that we read the stop byte. If valid, continue function, if invalid return error
                    if (vis_dir == 1) {vis_dir = 0;}
                    if (vis_dir == 0) {vis_dir = 1;}
                    break;
                }
                break;
        }
    }
}