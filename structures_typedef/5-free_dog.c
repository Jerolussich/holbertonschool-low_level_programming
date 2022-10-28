#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free malloc
 * @d: pointer
 * Return: a null
 */

void free_dog(dog_t *d)
{

	if (d->name == NULL)
	{
		free(d);
	}
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
	}
}
