#include "main.h"
/**
 * _strlen - Retourne la longueur d'une chaîne
 * @s: La chaîne à mesurer
 *
 * Return: Longueur de s
 */
int _strlen(char *s)
{
	int comp = 0;


	while (*s != '\0')
	{
		comp++;
		s++;
	}
	return(comp);
}
