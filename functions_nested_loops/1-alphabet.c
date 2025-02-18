#include "main.h"
#include <stdio.h>
/**
 * main - Prints alp
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
