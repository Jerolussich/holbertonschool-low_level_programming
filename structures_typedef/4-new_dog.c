#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *_strdup(char *str);
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

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}
	new_dog->name = _strdup(name);

	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = _strdup(owner);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	new_dog->age = age;
	return (new_dog);
}
char *_strdup(char *str)
{
	char *p = NULL;
	unsigned int i;
	unsigned int j;

	if (str)
	{
		for (j = 0; str[j] != '\0'; j++)
			continue;

		p = malloc(sizeof(char) * (j + 1));

		if (p == NULL)
		{
			return (NULL);
		}

		for (i = 0; i < j; i++)
		{
			p[i] = str[i];
		}
		return (p);

	}
		return (NULL);

}
