#include <Arduino.h>

// Declaring variables globally so both setup() and loop() can see them
int Led_red = 10;
int Led_yellow = 11;
int Led_green = 12;

void setup() 
{
    // You also need to configure these pins as OUTPUTs so they can light up!
    pinMode(Led_red, OUTPUT);
    pinMode(Led_yellow, OUTPUT);
    pinMode(Led_green, OUTPUT);
}

void loop() 
{
    // loop code is ran repeatedly
    /*initializing the value of digital pins on the arduino UNO 
    to a variable representing the specific lights/LEDs*/
    digitalWrite(Led_red, HIGH);
    delay(5000);
    digitalWrite(Led_red, LOW);

    digitalWrite(Led_yellow, HIGH);
    delay(3000);
    digitalWrite(Led_yellow, LOW);

    digitalWrite(Led_green, HIGH);
    delay(5000);
    digitalWrite(Led_green, LOW);
}