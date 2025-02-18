#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - Prints the alphabet 10 times
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
int i, alp;
		for (i = 0 ; i < 10 ; i++)
		{
			for (alp = 'a'; alp <= 'z'; alp++)
			{
				_putchar(alp);
			}
				_putchar('\n');
		}
}
