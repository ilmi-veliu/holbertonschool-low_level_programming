#include "main.h"
char *_strcpy(char *dest, char *src)
{
	char *pvd = dest;

	while (*src)
	{
		*dest = *src;

		dest++;
		src++;
	}
	return (pvd);
}
