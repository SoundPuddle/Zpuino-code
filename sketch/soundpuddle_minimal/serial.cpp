#include "soundpuddle.h"
#include "serial.h"

// extern void dumpdata() {
//     int i;
//     for (i=0;i<FFT_POINTS/2;i++) {
//         Serial.print(myfft.in_real[i].asInt());
//         Serial.print("[");
//         Serial.print(myfft.in_im[i].asInt());
//         Serial.print("]");
//         Serial.print("what's up!");
//         Serial.print(" ");
//     }
//     Serial.println();
// }

// functions
// print current ADC buffer (current, or toggle continuous reporting)
// print current FFT output buffer (current, or toggle continuous reporting)
// print current LED output buffer (current, or toggle continuous reporting)
// print adc gain
// change adc gain
// change hsv table parameters, recalculate table
// change audio input channel
// start/pause/dark

// if ( Serial.available() ) // if data is available to read
// {
// cmd = Serial.read(); // read it and store it in 'cmd'
// // Data format is byte 1 = command, byte 2 = parameter
// };


// switch ( cmd ) {
// case 1:
// // First byte contains a generic "command" byte. We arbitrarily defined '1' as the command to then check the 2nd parameter byte
// // User can additional commands by adding case 2, 3, 4, etc
// {
// // read the parameter byte
// param = Serial.read();
// switch (param)
// {
// case 1:
// // Android device requests the Arduino to send some data back to Android
// flashLED(1);
// if (Serial)
// {
// // Send back 2 bytes with a value of 1, 2
// Serial.write(1);
// Serial.write(2);
// };
// break;
// case 2:
// // Turn on status LED
// flashLED(2);
// digitalWrite(LEDPIN, HIGH );
// break;
// case 3:
// // Turn off status LED
// flashLED(3);
// digitalWrite(LEDPIN, LOW);
// break;
// case 4:
// // Demonstrate flashing the LED 4 times
// flashLED(4);
// break;
// case 5:
// // Demonstrate flashing the LED 5 times
// // Could add code here to control a servo via PWM outputs
// flashLED(5);
// break;
// default: break; // do nothing
// } // switch (param)
// } // switch (cmd) case 1
// default: break; // do nothing
// } // switch (cmd)