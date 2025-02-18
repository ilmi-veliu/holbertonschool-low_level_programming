#include <stdio.h>
/**
 * main - all number
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number = 0;

	while (number < 10)
	{
		putchar(number + '0');
		putchar(',');
		putchar(' ');
		number++;
	}
	return (0);
}
