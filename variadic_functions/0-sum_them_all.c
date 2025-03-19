#include "variadic_functions.h"
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
		return (total);
}
