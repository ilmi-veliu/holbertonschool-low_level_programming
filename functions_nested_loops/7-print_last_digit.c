#include "main.h"
/**
 * _abs - te
 * @r: L'entier à traiter
 *
 * Return: tkt
 */
int print_last_digit(int nbr)
{
	int last = nbr % 10;

	if (last < 0)
	last = -last;

	_putchar(last + '0');

	return (last);
}
