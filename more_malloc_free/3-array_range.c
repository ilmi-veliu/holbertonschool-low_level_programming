#include "main.h"
#include <stdlib.h>
/**
 * array_range - Crée un tableau d'entiers de min à max
 * @min: Valeur minimale
 * @max: Valeur maximale
 *
 * Return: Pointeur vers le tableau, NULL si échec
 */
int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
		return (NULL);

	array = malloc((max - min + 1) * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (i = 0; i <= (max - min); i++)
		array[i] = min + i;

	return (array);
}
