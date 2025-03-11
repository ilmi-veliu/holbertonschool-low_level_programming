#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Alloue un tableau 2D de dimensions width x height.
 * @width: Nombre de colonnes.
 * @height: Nombre de lignes.
 *
 * Return: Pointeur vers le tableau 2D ou NULL si l'allocation échoue.
 */
int **alloc_grid(int width, int height)
{
int **tab2;
int i, j;

	if (width <= 0 || height <= 0)
	return (NULL);

	tab2 = malloc(height * sizeof(int *));

	if (tab2 == NULL)
	return (NULL);

	for (i = 0; i < height; i++)
	{
		tab2[i] = malloc(width * sizeof(int));
		if (tab2[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(tab2[j]);
				free(tab2);
				return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			tab2[i][j] = 0;
		}
	}
return (tab2);
}
