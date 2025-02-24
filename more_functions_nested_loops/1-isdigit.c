#include "main.h"
/**
 * _isdigit - Vérifie si un caractère est un chiffre (0-9)
 * @c: Le caractère à vérif
 *
 * Return: 1 si chiffre, 0 sinon
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
