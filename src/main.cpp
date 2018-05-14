/*
 * Filename: main.cpp
 * File Created: Sunday, May 13th 2018, 23:02:18 
 * ------
 * Author: Davide Sordi
 * GitHub: @sordinho
 * ------
 * Last Modified: Monday, May 14th 2018, 00:24:53 
 */


#include "Arduino.h"

//define pin numbers
const int LED = 13;
const int switch1 = 4;
const int switch2 = 5;
const int switch3 = 6;
const int switch4 = 7;

void setup()
{   
    // setup in and out pins
    pinMode(LED, OUTPUT);
    pinMode(switch1, OUTPUT);
    pinMode(switch2, OUTPUT);
    pinMode(switch3, OUTPUT);
    pinMode(switch4, OUTPUT);
    // setup default values
    digitalWrite(LED, HIGH);
    digitalWrite(switch4, LOW);
    digitalWrite(switch3, LOW);
    digitalWrite(switch2, LOW);
    digitalWrite(switch1, LOW);

    Serial.begin(9600);

}

void loop()
{

    Serial.println("Start");

    delay(5000);
    // open close every switch
    for (int i = 4; i < 8; i++)
    {
        digitalWrite(i, HIGH);
        Serial.println("ON ");
        delay(2000);
        digitalWrite(i, LOW);
        Serial.println("OFF ");
        delay(3000);
    }
}

/*
 * Relay notes:
 * HIGH = RELAY LED OFF
 * LOW = RELAY LED ON
 *
 * COM,NC -> HIGH = LED OFF
 * COM,NC -> LOW  = LED ON
 *
 * COM,NO -> HIGH = LED ON
 * COM,NO -> LOW  = LED OFF
 */
