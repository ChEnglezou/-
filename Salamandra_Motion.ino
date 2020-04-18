#include <Servo.h>

Servo servo1;
Servo servo2;

Servo servo3;
Servo servo4;


int led = 7;
int angle = 0;
const int analogInPin = A0;
int sensorValue = 0;


void setup() {
  pinMode(led, OUTPUT);
  servo1.attach(11);
  servo2.attach(10);

  servo3.attach(9);
  servo4.attach(8);
}

void loop() {

  sensorValue = analogRead(analogInPin);

  if (sensorValue < 600) {
    digitalWrite(led, HIGH) ;
    
    servo1.write(180);
    delay(2000);
    servo2.write(180);
    delay(2000);
    
    servo3.write(-180);
    delay(2000);
    servo4.write(-180);


  }

  else {
    digitalWrite(led, LOW) ;
    
    servo1.write(-180);
    delay(2000);
    servo2.write(-180);
    delay(2000);
    
    servo3.write(180);
    delay(2000);
    servo4.write(180);

  }

}
