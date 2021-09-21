
#include <Servo.h>

Servo One;  // create servo object to control a servo
//Servo Two
// twelve servo objects can be created on most boards

int posone = 0;    // variable to store the servo position
//int postwo = 0;    // variable to store the servo position
int outputValue = 0;        // value output to the PWM (analog out)

void setup() {
  Serial.begin(9600); // initialize serial communications at 9600 bps:
  One.attach(9);  // attaches the servo on pin 9 to the servo object
 // Two.attach(10);  // attaches the servo on pin 10 to the servo object
}

void loop() {
  for (posone = 0; posone <= 180; posone += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(posone);              // tell servo to go to position in variable 'pos'
    outputValue = map(sensorValue, 0, 1023, 0, 255);  // map it to the range of the analog out:
    analogWrite(analogOutPin, outputValue);// change the analog out value:
    Serial.print("\t output = "); // print the results to the Serial Monitor:
    Serial.println(outputValue);
    delay(15);                       // waits 15ms for the servo to reach the position
  }
//  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
//    myservo.write(pos);              // tell servo to go to position in variable 'pos'
//    delay(15);                       // waits 15ms for the servo to reach the position
//  }
}
