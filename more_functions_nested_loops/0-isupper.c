#include "main.h"
/**
 * _isupper - Vérifie si un caractère est une majuscule
 * @c: Le caractère à vérifier
 *
 * Return: 1 si majuscule, 0 sinon
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
