#include "main.h"
void _puts(char *str)
{
	int c;

	for ( c = 0; str[c] != '\0';str++)
		_putchar(str[c]);

}
