#include <Arduino.h>

// Creates Constant "ledPin" to 9, the pin we will be using for LED Out
const int ledPin = 9;

void setup() {
  // Starts serial connection
  // Baud Rate (speed) of 9600
  Serial.begin(9600);

  // Sets pin 9 (ledPin) to Output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // initializes "reading" function as an analog reading from pin A0
  int reading  = analogRead(A0);

  // initializes "brightness" as the anolog reading from pin A0 divided by 4
  int brightness = reading / 4;

  // Simulates analog output using PWM to pin "ledPin" (9), using the "brightness" value
  analogWrite(ledPin, brightness);

  // Prints "brightness" value in Serial Monitor
  Serial.println(brightness);
}