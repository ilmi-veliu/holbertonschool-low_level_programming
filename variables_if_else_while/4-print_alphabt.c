#include <stdio.h>
/**
 * main - Prints lowercase alphabet
 * Return: 0
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
	if (alphabet != 'q' && alphabet != 'e')
		{
		putchar(alphabet);
		}
	alphabet++;
	}

	putchar('\n');
	return (0);
}
