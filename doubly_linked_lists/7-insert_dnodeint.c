#include "lists.h"
/**
 *  insert_dnodeint_at_index - return a node
 * @head: linked liist
 * @idx: position of node to be added
 * @n: int value to node
 * Return: new head node data or 0 if linked list is empty
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *h = *head;
	dlistint_t *pointerchain = NULL;
	unsigned int i = 0;

	pointerchain = malloc(sizeof(dlistint_t));
	if (!pointerchain)
	{
		return (NULL);
	}
	pointerchain->n = n;
	if (idx == 0)
	{
		pointerchain->next = h;
		pointerchain->prev = NULL;
		*head = pointerchain;
		return (pointerchain);
	}
	for (i = 0; i < idx - 1; i++)
	{
		if (h->next == NULL)
			return (NULL);
		h = h->next;
	}
	pointerchain->next = h->next;
	pointerchain->prev = h;
	h->next = pointerchain;
	return (pointerchain);
}
