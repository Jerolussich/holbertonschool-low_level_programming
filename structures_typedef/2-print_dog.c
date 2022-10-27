#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print structure
 * @d: structure
 * Return: 0
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
		{
			printf("%s\n", d->name);
		}
		else
			printf("Name: (nil)");
		if (d->age > - 1)
		{
			printf("%f\n", d->age);
		}
		else
			printf("Age: (nil)");
		if (d->owner)
		{
			printf("%s\n", d->owner);
		}
		else
			printf("owner: (nil)");
	}
}
