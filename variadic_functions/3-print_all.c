#include <stdio.h>
#include <stdarg.h>

void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (!str)
		str = "(nil)";

	printf("%s", str);
}

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j;
	void (*funcs[4])(va_list) = {print_char, print_int, print_float, print_string};
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
