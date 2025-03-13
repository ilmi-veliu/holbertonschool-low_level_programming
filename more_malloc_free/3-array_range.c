#include "main.h"
#include <stdlib.h>

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