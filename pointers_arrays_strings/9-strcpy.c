#include "main.h"
char *_strcpy(char *dest, char *src)
{
	while (*src)
	{
		*dest = *src;

		dest++;
		src++;
	}
	return (dest);
}
