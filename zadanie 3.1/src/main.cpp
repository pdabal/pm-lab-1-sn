#include <Arduino.h>

#define LED_RED13 13
#define LED_RED12 12
#define LED_RED7 7
#define LED_RED6 6

#define M_KROPKA_T 500

void setup()
{
  pinMode(LED_RED13, OUTPUT);
  pinMode(LED_RED12, OUTPUT);
  pinMode(LED_RED7, OUTPUT);
  pinMode(LED_RED6, OUTPUT);
}

void loop()
{
  digitalToggleByRegisters(LED_RED13);
  delay(M_KROPKA_T);

  digitalToggleByRegisters(LED_RED12);
  delay(M_KROPKA_T);

  digitalToggleByRegisters(LED_RED7);
  delay(M_KROPKA_T);

  digitalToggleByRegisters(LED_RED6);
  delay(M_KROPKA_T);

  digitalToggleByFunctions(LED_RED13);
  delay(M_KROPKA_T);

  digitalToggleByFunctions(LED_RED12);
  delay(M_KROPKA_T);

  digitalToggleByFunctions(LED_RED7);
  delay(M_KROPKA_T);

  digitalToggleByFunctions(LED_RED6);
  delay(M_KROPKA_T);
}

void digitalToggleByRegisters(uint8_t pin)
{
  int _pinport = 0;
  if (pin > 7 && pin <= 13)
  {
    _pinport = pin - 8;
    PORTB ^= (1 << _pinport);
  }
  else if (pin >= 0 && pin <= 7)
  {
    _pinport = pin;
    PORTD ^= (1 << _pinport);
  }
}

void digitalToggleByFunctions(uint8_t pin)
{
  digitalWrite(pin, !digitalRead(pin));
}