#include <stdio.h>
/**
 * main - Prints numbers and letters
 * Return: 0
 */
int main(void)
{
	int number = 0;
	char lettre = 'a';

	while (number < 10)
	{
		putchar(number + '0');
		number++;
	}

	while (lettre <= 'f')
	{
		putchar(lettre);
		lettre++;
	}

putchar('\n');
return (0);
}
