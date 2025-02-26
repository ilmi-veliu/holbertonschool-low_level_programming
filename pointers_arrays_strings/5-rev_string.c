#include "main.h"
void rev_string(char *s)
{
	int r = 0;

	while (s[r] != '\0')
	{
		r++;
	}

	while (r > 0)
	{
		r--;
		_putchar(s[r]);
	}
}
