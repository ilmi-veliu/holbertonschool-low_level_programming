#include "main.h"
/**
 * print_square - Prints a square of '#' characters
 * @size: Size of the square
 */
void print_square(int size)
{
	int p, r;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (p = 0; p < size; p++)
	{
		for (r = 0; r < size; r++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
