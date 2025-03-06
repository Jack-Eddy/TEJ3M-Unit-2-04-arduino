/* 
 Created by: Jack Eddy
 Created on: Febuary 2025
 
 This program turns the changes the colour of the RGB LED
*/

// constants
const int PIN_5 = 5;
const int PIN_4 = 4;
const int PIN_3 = 3;

// variables
int blinkTime = 1000;


void setup() {
  // sets LED pin to output
  pinMode(PIN_5, OUTPUT);
  pinMode(PIN_4, OUTPUT);
  pinMode(PIN_3, OUTPUT);
}

// Cycle through coloour combinations by turning pin voltage on and off
void loop() {
  digitalWrite(PIN_5, HIGH);
  digitalWrite(PIN_4, LOW);
  digitalWrite(PIN_3, LOW);
  delay(blinkTime);
  digitalWrite(PIN_5, LOW);
  digitalWrite(PIN_4, HIGH);
  digitalWrite(PIN_3, LOW);
  delay(blinkTime);
  digitalWrite(PIN_5, LOW);
  digitalWrite(PIN_4, LOW);
  digitalWrite(PIN_3, HIGH);
  delay(blinkTime);
  digitalWrite(PIN_5, HIGH);
  digitalWrite(PIN_4, HIGH);
  digitalWrite(PIN_3, LOW);
  delay(blinkTime);
  digitalWrite(PIN_5, LOW);
  digitalWrite(PIN_4, HIGH);
  digitalWrite(PIN_3, HIGH);
  delay(blinkTime);
  digitalWrite(PIN_5, HIGH);
  digitalWrite(PIN_4, LOW);
  digitalWrite(PIN_3, HIGH);
  delay(blinkTime);
  digitalWrite(PIN_5, HIGH);
  digitalWrite(PIN_4, HIGH);
  digitalWrite(PIN_3, HIGH);
  delay(blinkTime);
}
