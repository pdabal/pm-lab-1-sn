#include <iostream>
#include "morse.h"
#include <cctype>
#include <cstring>

int main(int argc, char *argv[])
{
	const char *ptr = "Arduino Uno";
  morseSend((int8_t *)ptr, 1);

	return 0;
}