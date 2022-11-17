#include "lists.h"
/**
 * print_list - print single listed data
 * @h: pointer to a module
 * Return: modules found
 */

size_t print_list(const list_t *h)
{
	int i = 0;

	while (h)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		i++;
	}
	return (i);
}
