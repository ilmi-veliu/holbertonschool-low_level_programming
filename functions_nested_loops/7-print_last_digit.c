#include "main.h"
int print_last_digit(int nbr)
{
	int last = nbr %10;

	_putchar(last + '0');

	return (last);
}
