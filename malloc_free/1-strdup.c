#include "main.h"
char *_strdup(char *str)
{
	int i;
	char *dup;
	int d;

	while (str[i] != '\0')
	{
		i++;
	}

	dup = malloc((i + 1) * sizeof(char));

	if (dup == NULL)
		return (NULL);
	for (d = 0; d <= i ; d++)
	{
		dup[d] = str[d];
	}

	return (dup);
}
