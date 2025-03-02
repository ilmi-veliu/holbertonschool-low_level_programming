#include "main.h"
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*dest != '\0')
		dest++;

	while(n > 0 && *src)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (ptr);
}
