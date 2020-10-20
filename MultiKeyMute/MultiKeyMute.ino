#include <OneButton.h>
#include <DigiKeyboard.h>

#define BUTTON_PIN 2
OneButton button(BUTTON_PIN, true, true);

void setup()
{
  //pinMode(2, INPUT);

  button.attachClick([]() {
    Serial.println("Click");
    DigiKeyboard.sendKeyStroke(KEY_A, MOD_ALT_LEFT); 
  });

  button.attachDoubleClick([]() {
    Serial.println("Double click");
    DigiKeyboard.sendKeyStroke(KEY_V, MOD_ALT_LEFT); 
  });

  
  button.attachLongPressStart([]() {
    Serial.println("Long press");
    DigiKeyboard.sendKeyStroke(KEY_Q, MOD_ALT_LEFT); 
  });
}

void loop()
{
    button.tick();
}
