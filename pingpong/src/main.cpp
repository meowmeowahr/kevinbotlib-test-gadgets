#include <Arduino.h>

void setup() { Serial.begin(9600); }

void loop() {
  if (Serial.available()) {
    String incoming = Serial.readStringUntil('\n');
    if (incoming == "ping") {
      Serial.print("pong\n");
    }
  }
}
