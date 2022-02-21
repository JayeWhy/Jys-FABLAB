#include <Servo.h>

Servo myservol;
Servo yourservor;  // create servo object to control a servo
// Define the number of servos
#define SERVOS 2

int pos = 0;    // variable to store the servo position

void setup() {
  myservol.attach(9);
  yourservor.attach(8); // attaches the servo on pin 9 to the servo object
}

void loop() {
   for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
      myservol.write(pos); 
      yourservor.write(pos);
     // tell servo to go to position in variable 'pos'
     delay(1);          // waits 15ms for the servo to reach the position
  } 
   for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
      myservol.write(pos); 
      yourservor.write(pos);        // tell servo to go to position in variable 'pos'
      delay(1);                  // waits 3ms for the servo to reach the position
  }
}
