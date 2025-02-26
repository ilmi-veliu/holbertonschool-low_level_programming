#include "main.h"
/**
 * puts2 - Affiche chaque 2ème caractère d'une chaîne
 * @str: Chaîne à afficher
 */
void puts2(char *str)
{
	int i = 0;

	if (str != NULL)
	{
		while (str[i] != '\0')
		{
			if (i % 2 == 0)
			{
				_putchar(str[i]);
		
			}
			i++;
		}
	}
	_putchar('\n');
}
