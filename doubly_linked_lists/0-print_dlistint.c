#include "lists.h"

/**
 * print_dlistint - print list of numbers
 * @h: pointer to a module with an int
 * Return: modules found
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
