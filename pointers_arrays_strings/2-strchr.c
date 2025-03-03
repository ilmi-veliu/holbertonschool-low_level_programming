#include "main.h"
#include "main.h"
/**
 * _strchr - Locates a character in a string
 * @s: The string to search
 * @c: The character to find
 *
 * Return: Pointer
 */
char *_strchr(char *s, char c)
{
	if (*s == '\0')
	{
		return (NULL);
	}

    while (*s != '\0')
    {
        if (*s == c)
        {
            return (s);
        }
        s++;
    }
	return (0);
    }
