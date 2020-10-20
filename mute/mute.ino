#include <DigiKeyboard.h>
void setup()
{
  pinMode(0, OUTPUT);
  pinMode(2, INPUT_PULLUP);
  digitalWrite(0, LOW);
}

const unsigned char delayMinValue = 30;
const unsigned char delayMaxValue = 40;
bool pressed = false; // debounce flag
const int BUTTON_PIN=2;

void loop()
{
  DigiKeyboard.sendKeyStroke(0);
  int reading = digitalRead(BUTTON_PIN);
  if (!pressed && reading==LOW) {
    pressed=true;
    DigiKeyboard.sendKeyStroke(KEY_A, MOD_ALT_LEFT); 
  } else if (reading==HIGH) {
    pressed=false;
  }
  DigiKeyboard.delay(100);
}
