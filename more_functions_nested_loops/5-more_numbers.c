#include "main.h"
/**
 * more_numbers - Affiche les nombres de 0 à 14, 10 fois
 */
void more_numbers(void)
{
	int a;
	int b;

	for (a = 0 ; a <= 10 ; a++)
	{
		for  (b = 0 ; b <= 14 ; b++)
		{
			if (b <= 9)
			{
				_putchar(b + '0');
			}

			else
			{
				_putchar('0' + ( b /10));
				_putchar('0' + (b % 10));
			}
		}
	_putchar('\n');
	}
}
