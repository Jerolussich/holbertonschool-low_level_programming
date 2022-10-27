#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initialize structure
 * @d: structure
 * @name: variable name
 * @age: variable age
 * @owner: variable owner
 * Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
