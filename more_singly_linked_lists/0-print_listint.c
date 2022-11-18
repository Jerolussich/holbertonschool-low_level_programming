#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		printf("%d", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
