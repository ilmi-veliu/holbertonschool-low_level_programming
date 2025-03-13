#include "main.h"
/**
 * _strdup - Crée une copie de la chaîne `str`
 * @str: La chaîne à dupliquer
 *
 * Return: Un pointeur vers la copie ou NULL en cas d'échec
 */
char *_strdup(char *str)
{
	int i = 0;
	char *dup;
	int d;

	while (str[i] != '\0')
	{
		i++;
	}

	dup = malloc((i + 1) * sizeof(char));

	if (dup == NULL)
		return (NULL);
	for (d = 0; d <= i ; d++)
	{
		dup[d] = str[d];
	}

	dup[i] = '\0';
	return (dup);
}
