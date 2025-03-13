#include "main.h"
/**
 * print_array - Affiche n éléments d'un tableau d'entiers
 * @a: Tableau d'entiers
 * @n: Nombre d'éléments à afficher
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
