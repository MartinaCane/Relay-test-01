//
// Created by Davide Sordi on 31/10/2017 at 21.51
//

#include "Arduino.h"

//definiamo i numeri dei pin
const int LED = 13;
const int switch1 = 4;
const int switch2 = 5;
const int switch3 = 6;
const int switch4 = 7;

void setup() {
    pinMode(LED,OUTPUT);
    pinMode(switch1,OUTPUT);
    pinMode(switch2,OUTPUT);
    pinMode(switch3,OUTPUT);
    pinMode(switch4,OUTPUT);
    digitalWrite(LED,HIGH);
    digitalWrite(switch4,LOW);
    digitalWrite(switch3,LOW);
    digitalWrite(switch2,LOW);
    digitalWrite(switch1,LOW);

    Serial.begin(9600);
}

void loop() {

    Serial.println("Inizio del programma");

    delay(5000);
    for(int i=4;i<8;i++) {
        digitalWrite(i, HIGH);
        Serial.println("ON ");
        delay(2000);
        digitalWrite(i, LOW);
        Serial.println("OFF ");
        delay(3000);
    }

}

// test comment

/*
 * Funzionamento relay:
 * HIGH = RELAY LED OFF
 * LOW = RELAY LED ON
 *
 * COM,NC -> HIGH = LED OFF
 * COM,NC -> LOW  = LED ON
 *
 * COM,NO -> HIGH = LED ON
 * COM,NO -> LOW  = LED OFF
 */
