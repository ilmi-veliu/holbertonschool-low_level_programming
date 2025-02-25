#include "main.h"
int _strlen(char *s)
{
	int comp = 0;


	while (*s != '\0')
	{
		comp++;
		s++;
	}
	return(comp);
}
