#include <Arduino.h>

// Define Pins
#define BLUE 3
#define GREEN 5
#define RED 6

void setup() {
    pinMode(RED, OUTPUT);
    pinMode(GREEN, OUTPUT);
    pinMode(BLUE, OUTPUT);
    digitalWrite(RED, HIGH);
    digitalWrite(GREEN, LOW);
    digitalWrite(BLUE, LOW);
}

int redValue = 0; // choose a value between 1 and 255 to change colour
int greenValue = 255;
int blueValue = 0;

void loop() {
    analogWrite(RED, redValue);
    analogWrite(GREEN, greenValue);
    analogWrite(BLUE, blueValue);
}

