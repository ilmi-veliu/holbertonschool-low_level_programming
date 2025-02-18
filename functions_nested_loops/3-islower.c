#include "main.h"
/**
 * _islower - Fonction qui vérifie si un caractère est en minuscule
 * @c: Le caractère à vérifier
 *
 * Return: 1 si le caractère est une lettre minuscule, sinon 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else 
	{
		return (0);
	}
}
