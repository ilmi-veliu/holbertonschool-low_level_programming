#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Additionne des nombres passés en arguments de la ligne de commande.
 * @argc: Nombre d'arguments.
 * @argv: Tableau des arguments.
 *
 * Return: 0 si succès, 1 si un argument n'est pas un nombre.
 */
int main(int argc, char *argv[])
{
	int i = 1, j = 0, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}

	printf("%i\n", sum);
	return (0);
}
