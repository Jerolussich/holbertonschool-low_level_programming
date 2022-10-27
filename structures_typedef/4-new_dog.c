#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - print structure
 * @name: holds a char
 * @age: holds an int
 * @owner: holds a char
 * Return: 0
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(struct dog));

	if (new_dog == NULL)
	{
		return (NULL);
	}
	else
	new_dog->name = name;
	new_dog->owner = owner;
	new_dog->age = age;
	return (new_dog);
}
