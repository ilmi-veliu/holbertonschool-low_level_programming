#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - Prints the alphabet in lowercase.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		_putchar(alp);
		alp++;
	}
	_putchar('\n');
}
