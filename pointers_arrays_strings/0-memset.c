#include "main.h"
/**
 * _memset - Fills memory with a constant byte
 * @s: Pointer to the memory area
 * @b: Constant byte to fill
 * @n: Number of bytes to fill
 *
 * Return: Pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

<<<<<<< HEAD
    while (n != 0)
    {
        s[i] = b;
        i++;
        n--;
    }
    
    return (s);
=======
	while (n != 0)
	{
		s[i] = b;
		i++;
		n--;
	}
return (s);
}
>>>>>>> 508b42057287c9cb478775835aa38e0145157284
