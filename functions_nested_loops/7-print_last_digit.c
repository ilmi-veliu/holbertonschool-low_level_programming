#include "main.h"
/**
 * print_last_digit - Affiche le dernier chiffre d'un nombre
 * @nbr: Le nombre à traiter
 *
 * Return: Le dernier chiffre
 */
int print_last_digit(int nbr)
{
	int last = nbr % 10;

	if (last < 0)
	last = -last;

	_putchar(last + '0');

	return (last);
}
