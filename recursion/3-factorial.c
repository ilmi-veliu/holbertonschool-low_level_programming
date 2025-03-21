#include "main.h"
/**
 * factorial - Returns the factorial of a number.
 * @n: The number to calculate the factorial for.
 *
 * Return: The factorial of n, or 0 if n is negative.
 */
int factorial(int n)
{
	if (n < 0)
	return (-1);

	if (n == 0)
	return (1);

	return (n * factorial(n - 1));
}
