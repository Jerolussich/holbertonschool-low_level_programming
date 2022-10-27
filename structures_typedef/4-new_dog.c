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
	int i = 0;
	int j = 0;

	dog_t *new_dog;

	for (; name[i]; i++)
		;
	for (; owner[j]; j++)
		;

	new_dog = malloc(sizeof(dog_t));
	new_dog->name = malloc(sizeof(char) * i);
	new_dog->owner = malloc(sizeof(char) * j);

	if (new_dog == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	else
	{
		new_dog->name = name;
		new_dog->owner = owner;
		new_dog->age = age;
		return (new_dog);
	}
}
