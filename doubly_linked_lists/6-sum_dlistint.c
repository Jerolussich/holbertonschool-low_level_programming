#include "lists.h"
/**
 * sum_dlistint - sum of node value
 * @head: linked list
 * Return: return sum of node value
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *h = head;
	int i = 0;

	if (!h)
		return (0);
	while (h)
	{
		i += h->n;
		h = h->next;
	}
	return (i);
}
