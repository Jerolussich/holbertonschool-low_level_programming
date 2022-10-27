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
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
		{
			printf("%s", d->name);
		}
		else
			printf("(nil)");
		if (d->age)
		{
			printf("%f", d->age);
		}
		else
			printf("(nil)");
		if (d->owner)
		{
			printf("%s", d->owner);
		}
		else
			printf("(nil)");
	}
}
