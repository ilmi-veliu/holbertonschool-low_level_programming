#include "main.h"
/**
 * print_most_numbers - Affiche les chiffres de 0 à 9 sauf 2 et 4
 */
void print_most_numbers(void)
{
	int nb = 0;

	while (nb <= 9)
	{
		if (nb != 2 && nb != 4)
			{	_putchar(nb + '0');
			}
		nb++;
	}
	_putchar('\n');
}
