#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string using recursion.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s == '\0')
		return (count);

	if (s)
	{
		count++;
		return (count + _strlen_recursion(s + 1));
	}
	return (count);
}
