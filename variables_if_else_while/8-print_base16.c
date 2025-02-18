#include <stdio.h>
/**
 * main - Prints number
 * Return: 0
 */
int main(void)
{
	int number = 0;

	while (number < 16)
		{
			putchar(number +'0' );
			number++;
		}
	putchar('\n');
	return (0);
}
