#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free malloc
 * @d: pointer
 * Return: a null
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
