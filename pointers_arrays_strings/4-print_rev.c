#include "main.h"
/**
 * print_rev - Affiche une chaîne inversée
 * @s: Chaîne à afficher
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	while (i > 0)
	{
		i--;
		_putchar(s[i]);
	}
	_putchar('\n');
}
