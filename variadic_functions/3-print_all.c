#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - Imprime un caractère
 * @args: Liste des arguments
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - Imprime un entier
 * @args: Liste des arguments
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - Imprime un float
 * @args: Liste des arguments
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - Imprime une chaîne de caractères
 * @args: Liste des arguments
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (!str)
		str = "(nil)";

	printf("%s", str);
}

/**
 * print_all - Imprime différents types d'arguments selon un format donné
 * @format: Liste des types d'arguments passés à la fonction
 *
 * Description: La fonction prend en entrée une chaîne `format` et un nombre
 * variable d'arguments. Elle affiche chaque argument correspondant au type
 * spécifié dans `format` :
 * - 'c' : caractère
 * - 'i' : entier
 * - 'f' : float
 * - 's' : chaîne de caractères
 *
 * Si un argument de type chaîne de caractères est `NULL`, "(nil)"
 * à la place. La fonction imprime tous les arguments séparés par ,
 * et termine par une nouvelle ligne.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j;
	void (*funcs[4])(va_list) = {
		print_char, print_int, print_float,
		print_string
	};
	char types[4] = {'c', 'i', 'f', 's'};
	char *sep = "";

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (j < 4 && format[i] != types[j])
			j++;

		if (j < 4)
		{
			printf("%s", sep);
			funcs[j](args);
			sep = ", ";
		}
		i++;
	}

	printf("\n");
	va_end(args);
}
