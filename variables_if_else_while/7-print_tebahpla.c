#include <stdio.h>
/**
 * main - alphabet reverse
 * Return: 0
 */
int main(void)
{
char alphabet = 'z';

	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;

	}
	putchar('\n');
	return (0);
}
