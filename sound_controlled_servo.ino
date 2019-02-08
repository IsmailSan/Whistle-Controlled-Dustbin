
#include <Servo.h> // servo library

Servo servo;

int micPin = A0;
int servoPin = 9;  


void setup() {
  
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  pinMode(micPin, INPUT);
  servo.attach(servoPin);
  pinMode(servoPin, OUTPUT);
  servo.write(0);
  
  
  
  
}

void loop() {
  
 int val = analogRead(micPin); // read the input on analog pin 0
     
  Serial.println(val);
  
  if ( val>376) { 
   servo.write(80); 
   delay(10000);
   }
   else {
   servo.write(0);
   }
   delay(100);
}
  
 
  
 
  
