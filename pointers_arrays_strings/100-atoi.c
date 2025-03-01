#include "main.h"
#include <limits.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer value of the string.
 */
int _atoi(char *s)
{
	int sign = 1, result = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
		{
			if (result > (INT_MAX - (*s - '0')) / 10)
				return (sign == 1 ? INT_MAX : INT_MIN);
			result = result * 10 + (*s - '0');
		}
		s++;
	}

	return (result * sign);
}
