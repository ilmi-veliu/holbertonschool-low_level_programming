#include "main.h"

/**
 * more_numbers - Affiche les chiffres de 0 à 14, 10 fois
 */
void more_numbers(void)
{
	int i, p;

	for (p = 0; p < 10; p++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
	_putchar('\n');
	}
}
