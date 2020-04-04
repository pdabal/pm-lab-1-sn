#include "morse.h"
#include <Arduino.h>
#include <iostream>
#include <cstring>

#define M_KROPKA_T 200
#define M_KRESKA_T 3 * M_KROPKA_T
#define M_PAUZA_T 3 * M_KROPKA_T
#define M_SPACJA_T 7 * M_KROPKA_T

using namespace std;

uint8_t static _pin;

void morseSend(const int8_t *message, uint8_t pin)
{
    _pin = pin;
    int lenght = strlen((const char *)message);
    for (size_t i = 0; i < lenght; i++)
    {
        char letter = tolower(message[i]);
        char *encode_letter = encode((int)letter);
        sendCode((int8_t *)encode_letter);
        printf("%s\n", encode_letter);
    }
}

void sendCode(int8_t *code)
{
    if (*code == '.')
    {
        // Kropka na pinie
        digitalWrite(_pin, HIGH);
        delay(M_KROPKA_T);
        digitalWrite(_pin, LOW);
        delay(M_PAUZA_T);
    }
    else if (*code == '-')
    {
        // Kreska na pinie
        digitalWrite(_pin, HIGH);
        delay(M_KRESKA_T);
        digitalWrite(_pin, LOW);
        delay(M_PAUZA_T);
    }
}

char *encode(int8_t c)
{
    switch (c)
    {
    case 97:
        return (char *)".-";
        break;
    case 98:
        return (char *)"-...";
        break;
    case 99:
        return (char *)"-.-.";
        break;
    case 100:
        return (char *)"-..";
        break;
    case 101:
        return (char *)".";
        break;
    case 102:
        return (char *)"..-.";
        break;
    case 103:
        return (char *)"--.";
        break;
    case 104:
        return (char *)"....";
        break;
    case 105:
        return (char *)"..";
        break;
    case 106:
        return (char *)".---";
        break;
    case 107:
        return (char *)"-.-";
        break;
    case 108:
        return (char *)".-..";
        break;
    case 109:
        return (char *)"--";
        break;
    case 110:
        return (char *)"-.";
        break;
    case 111:
        return (char *)"---";
        break;
    case 112:
        return (char *)".--.";
        break;
    case 113:
        return (char *)"--.-";
        break;
    case 114:
        return (char *)".-.";
        break;
    case 115:
        return (char *)"...";
        break;
    case 116:
        return (char *)"-";
        break;
    case 117:
        return (char *)"..-";
        break;
    case 118:
        return (char *)"...-";
        break;
    case 119:
        return (char *)".--";
        break;
    case 120:
        return (char *)"-..-";
        break;
    case 121:
        return (char *)"-.--";
        break;
    case 122:
        return (char *)"--..";
        break;
    case 32:
        return (char *)" ";
        break;
    }
}