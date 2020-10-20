#include "DigiKeyboard.h"

void setup() {
  pinMode(1, OUTPUT);
}

void loop() {
  digitalWrite(1, HIGH);
  delay(1500);
  
  DigiKeyboard.println("Tom says hello");
  
  digitalWrite(1, LOW);
  delay(1500);
} 

Tom says hello
Tom says hello
Tom says hello
Tom says hello
