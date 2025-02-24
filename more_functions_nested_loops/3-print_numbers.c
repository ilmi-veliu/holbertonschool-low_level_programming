#include "main.h"
/**
 * print_numbers - Affiche les chiffres de 0 à 9
 */
void print_numbers(void)
{
	int nb = 0;
	while (nb <= 9)
	{
		_putchar(nb + '0');
		nb++;
	}
	_putchar('\n');
}
