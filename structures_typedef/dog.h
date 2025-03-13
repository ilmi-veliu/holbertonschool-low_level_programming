#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure pour représenter un chien
 * @name: nom du chien
 * @age: âge du chien
 * @owner: propriétaire du chien
 *
 * Cette structure permet de stocker les informations concernant un chien,
 * y compris son nom, son âge et le nom de son propriétaire.
 */
struct dog
{
    char *name;
    float age;
    char *owner;
};
#endif