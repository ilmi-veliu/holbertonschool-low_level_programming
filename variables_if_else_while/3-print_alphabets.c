#include <stdio.h>
/**
 * main - Prints lowercase alphabet
 * Return: 0
 */
int main(void)
{
char alphabet = 'a';
char alphabet_deux = 'A';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;

	}

	while (alphabet_deux <= 'Z')
	{
		putchar(alphabet_deux);
		alphabet_deux++;
	}
	putchar('\n');
	return (0);
}
