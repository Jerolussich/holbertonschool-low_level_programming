#include "lists.h"
/**
 *
 *
 */

size_t print_list(const list_t *h)
{
	int i = 0;

	while (h->next)
	{
		printf("[%d]" "%s", h->len,h->str);
		i++;
		h = h->next;
	}
	printf("[0] (nil)");
	return (i);
}
