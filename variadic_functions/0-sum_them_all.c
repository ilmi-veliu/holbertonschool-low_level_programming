#include "variadic_functions.h"
/**
 * sum_them_all - Calcule la somme de tous ses paramètres.
 * @n: Nombre d'arguments passés à la fonction.
 *
 * Return: La somme des paramètres. Retourne 0 si n est égal à 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	return (0);
	int i;
	int total = 0;

	va_list args;
	va_start (args,n);

	for (i = 0; i < n ; i ++)
	{
		total += va_arg (args ,int);
	}
	va_end (args);
		return (total);
}
