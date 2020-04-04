#ifndef MORSE_H
#define MORSE_H

#include <stdint.h>

void morseSend(const int8_t * message, uint8_t pin);
char* encode(int8_t c);
void sendCode(int8_t * code);

#endif