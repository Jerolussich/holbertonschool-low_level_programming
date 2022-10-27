#ifndef dog_h
#define dog_h
/**
 * struct dog - define structure
 * @name: variable name
 * @age: variable age
 * @owner: variable owner
 * Return: 0
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
