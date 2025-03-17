#include <stdio.h>

/**
 * print_name - Appelle une fonction pour afficher un nom.
 * @name: Le nom à afficher.
 * @f: La fonction à appeler pour afficher le nom.
 */
void print_name(char *name, void (*f)(char *))
{
    if (name != NULL && f != NULL)
    {
        f(name);
    }
}

/**
 * display_name - Affiche un nom caractère par caractère.
 * @name: Le nom à afficher.
 */
void display_name(char *name)
{
    while (*name)
    {
        putchar(*name);  // Affiche chaque caractère avec putchar
        name++;  // Passe au caractère suivant
    }
}
