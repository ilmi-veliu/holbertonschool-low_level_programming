#include "main.h"
/**
 * _puts - Affiche une chaîne de caractères
 * @str: La chaîne à afficher
 */
void _puts(char *str)
{
	int c;

	for (c = 0; str[c] != '\0'; str++)
	{
		_putchar(str[c]);
	}
	_putchar('\n');

}
