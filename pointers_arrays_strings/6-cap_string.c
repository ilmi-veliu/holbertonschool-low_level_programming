#include "main.h"
#include <string.h>
/**
 * cap_string - Capitalizes all words of a string
 * @str: The string to be modified
 *
 * Return: A pointer to the modified string
 */
char *cap_string(char *str)
{
	int i = 0, j;
	char separators[] = " \t\n,;.!?\"(){}";

	while (str[i])
	{
		if (i == 0 || (str[i - 1] && strchr(separators, str[i - 1])))
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}
		i++;
	}
	return (str);
}
