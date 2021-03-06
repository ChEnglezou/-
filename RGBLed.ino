int red_light_pin = 4;
int green_light_pin = 5;
int blue_light_pin = 6;

const int analogInPin = A0;
int sensorValue = 0;
int i = 0;

void setup() {
  pinMode(red_light_pin, OUTPUT);
  pinMode(green_light_pin, OUTPUT);
  pinMode(blue_light_pin, OUTPUT);
}

void loop() {

  sensorValue = analogRead(analogInPin);

  if (sensorValue < 600) {

    RGB_color(255, 0, 255);
    delay(1500);
    RGB_color(55, 0, 55);
    delay(1500);
  }

  else {
    RGB_color(231, 146, 0);
    delay(100);
  }


}

void RGB_color(int red_light_value, int green_light_value, int blue_light_value)
{
  analogWrite(red_light_pin, red_light_value);
  analogWrite(green_light_pin, green_light_value);
  analogWrite(blue_light_pin, blue_light_value);
}
