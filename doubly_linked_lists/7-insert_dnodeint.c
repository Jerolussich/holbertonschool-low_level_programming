#include "lists.h"
/**
 * insert_dnodeint_at_index - return a node
 * @h: linked liist
 * @idx: position of node to be added
 * @n: int value to node
 * Return: new head node data or 0 if linked list is empty
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *h1 = *h;
	dlistint_t *pointerchain = NULL;
	unsigned int i = 0;

	pointerchain = malloc(sizeof(dlistint_t));
	if (!pointerchain)
		return (NULL);
	pointerchain->n = n;

	if (idx == 0 || *h == NULL)
		return (add_dnodeint(h, n));
	for (i = 0; i < idx - 1; i++)
	{
		if (!h1)
			return (NULL);
		h1 = h1->next;
	}
	if (h1->next == NULL)
		return (add_dnodeint_end(h, n));

	pointerchain->next = h1->next;
	pointerchain->prev = h1;
	h1->next = pointerchain;
	h1 = pointerchain->next;
	h1->prev = pointerchain;
	return (pointerchain);
}
