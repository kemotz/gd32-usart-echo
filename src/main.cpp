#include <Arduino.h>


#define LED PB5
void setup(){

     Serial.begin(115200);

    pinMode(LED, OUTPUT);
}

void loop(){
    digitalWrite(LED, LOW);
    delay(1);
    digitalWrite(LED, HIGH);
    delay(1);
 
 
  if(Serial.available() > 0){
    Serial.write(Serial.read()+10);
  }
}
 