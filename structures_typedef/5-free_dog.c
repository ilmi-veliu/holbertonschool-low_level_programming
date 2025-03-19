#include "dog.h"

/**
 * free_dog - Frees a dog_t structure
 * @d: Pointer to the dog_t structure to free
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
