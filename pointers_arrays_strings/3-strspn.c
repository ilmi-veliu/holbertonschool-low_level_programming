#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring
 * @s: The string to be searched
 * @accept: The prefix to be measured
 *
 * Return: The number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, count = 0;

for (i = 0; s[i]; i++)
{
	for (j = 0; accept[j]; j++)
	{
		if (s[i] == accept[j])
		{
			count++;
			break;
		}
	}
	if (accept[j] == '\0')
		break;
}
	return (count);
}
