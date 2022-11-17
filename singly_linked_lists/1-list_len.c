#include "lists.h"
/**
 * list_len - print single listed data
 * @h: pointer to a module
 * Return: modules found
 */

size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
