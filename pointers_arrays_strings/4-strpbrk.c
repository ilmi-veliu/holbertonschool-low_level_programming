#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - Searches a string for any set of bytes.
 * @s: The string to search in.
 * @accept: The set of bytes to search for.
 *
 * Return: A pointer to the first matching byte in s,
 *         or NULL if no match is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (NULL);
}
