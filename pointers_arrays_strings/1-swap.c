#include "main.h"
/**
 * swap_int - Échange les valeurs de deux entiers
 * @a: Premier entier
 * @b: Deuxième entier
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
