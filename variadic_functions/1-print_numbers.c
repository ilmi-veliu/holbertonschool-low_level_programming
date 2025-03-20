#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
/**
 * print_numbers - Imprime les nombres passés en paramètres.
 * @separator: Chaîne de caractères à imprimer entre les nombres.
 * @n: Nombre d'arguments passés à la fonction.
 *
 * Return: void.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && i < n - 1)
		printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
