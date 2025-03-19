#include "dog.h"

/**
 * _strlen - Computes the length of a string
 * @s: The string
 * Return: Length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}

/**
 * _strcpy - Copies a string
 * @dest: Destination buffer
 * @src: Source string
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 * Return: Pointer to the new dog_t structure, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *name_copy, *owner_copy;

	if (!name || !owner)
		return (NULL);

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);

	name_copy = malloc(_strlen(name) + 1);
	if (!name_copy)
	{
		free(d);
		return (NULL);
	}
	_strcpy(name_copy, name);

	owner_copy = malloc(_strlen(owner) + 1);
	if (!owner_copy)
	{
		free(name_copy);
		free(d);
		return (NULL);
	}
	_strcpy(owner_copy, owner);

	d->name = name_copy;
	d->age = age;
	d->owner = owner_copy;

	return (d);
}
