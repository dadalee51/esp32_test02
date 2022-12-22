#include <Arduino.h>

void Task1code( void * parameter) {
    delay(500);
    Serial.print("Task1 running on core ");
    Serial.println(xPortGetCoreID());
    for(;;) {//infinite loop
        Serial.println("Nothing.");
        delay(1000);
    }
}

void Task2code(void * parameter){
    Serial.print("Task1 running on core ");
    Serial.println(xPortGetCoreID());
    for(;;) {
        digitalWrite(22, HIGH);
        delay(500);
        digitalWrite(22, LOW);
        delay(500);
    }
}

/**
 * every basic small multiple process example will require:
 * how to share variables across tasks, 
 * eg, message passing.
 * 
*/

