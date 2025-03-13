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
    int i;
    int *tab;

    if (min > max)
        return (NULL);

    tab = malloc((max - min + 1) * sizeof(int));

    if (tab == NULL)
        return (NULL);

    for (i = 0; min <= max; i++, min++)
    {
        tab[i] = min;
    }

    return tab;
}