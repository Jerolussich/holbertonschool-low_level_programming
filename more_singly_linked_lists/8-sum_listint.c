#include "lists.h"
/**
 * sum_listint - sum of node value
 * @head: singly list
 * Return: return sum of node value
 */

int sum_listint(listint_t *head)
{
	listint_t *h = head;
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
