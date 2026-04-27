#include <Arduino.h>

void setup() {
  // initialize serial communication at 115200 bits per second:
  Serial.begin(115200);

  //set the resolution to 10 bits (0-1023)
  analogReadResolution(10);
}

void loop() {
  // read the analog / millivolts value for pin 4, or A5:
  int analogValue = analogRead(4);
  int analogVolts = analogReadMilliVolts(4);

  // print out the values you read:
  Serial.printf("ADC analog value = %d\n", analogValue);
  Serial.printf("ADC millivolts value = %d\n", analogVolts);

  delay(100);  // delay in between reads for clear read from serial
}
