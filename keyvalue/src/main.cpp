#include <Arduino.h>

void setup() {
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    String input = Serial.readStringUntil('\n');
    input.trim();
    
    int delimiterIndex = input.indexOf('=');
    if (delimiterIndex != -1) {
      String key = input.substring(0, delimiterIndex);
      String value = input.substring(delimiterIndex + 1);
      
      String response = String(key + "=" + value + ".RECIEVED");
      Serial.println(response);
    }
  }
}