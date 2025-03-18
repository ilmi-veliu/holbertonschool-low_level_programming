#include <stdio.h>
/**
 * int_index - Cherche un entier dans un tableau
 * @array: Tableau d'entiers
 * @size: Nombre d'éléments
 * @cmp: Fonction de comparaison
 *
 * Return: Index du premier match ou -1 si aucun
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
