#include "main.h"
/**
 * _abs - Calcule la valeur absolue d'un entier
 * @r: L'entier à traiter
 *
 * Return: La valeur absolue de r
 */
int _abs(int r)
{
	int valeur_absolut;

	valeur_absolut = abs(r);
	_putchar(valeur_absolut + '0');

	return (valeur_absolut);
}
