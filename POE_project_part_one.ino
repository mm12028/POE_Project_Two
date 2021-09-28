
#include <Servo.h>
#include<SharpIR.h>
#define IRPin A0
#define model 20150;

//Servo One;  // create servo object to control a servo
Servo Two;

// twelve servo objects can be created on most boards

//int posone = 0;    // variable to store the servo position
int postwo = 0;    // variable to store the servo position

//int AngleOne = 0; // Angle of sevro one
int AngleTwo = 0; // Angle of servo two
int sensorValue;


void setup() {
  Serial.begin(9600); // initialize serial communications at 9600 bps:
//  One.attach(9);  // attaches the servo on pin 9 to the servo object
  Two.attach(10);  // attaches the servo on pin 10 to the servo object
  
//  One.write(posone);
  Two.write(postwo); 
  delay(500);
}

void loop() {
//  for (posone = 0; posone <= 180; posone += 10) { // goes from 0 degrees to 180 degrees// in steps of 1 degree
//    One.write(posone);              // tell servo to go to position in variable 'pos'
//    delay(15);                       // waits 15ms for the servo to reach the position
    
    for (postwo = 90; postwo >= 0; postwo -= 1) { // goes from 180 degrees to 0 degrees
      Two.write(postwo);  // tell servo to go to position in variable 'pos'
      sensorValue = analogRead(A0);
//      Serial.print("angle one = ");
//      Serial.print(posone);
      Serial.print("angle two = ");
      Serial.print(postwo);
      Serial.print("\t Sensor Value = ");
      Serial.println(sensorValue);
      delay(15);          // waits 15ms for the servo to reach the position
    }
 //}
 }
