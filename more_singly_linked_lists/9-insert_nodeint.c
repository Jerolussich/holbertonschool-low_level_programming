#include "lists.h"
/**
 *  insert_nodeint_at_index - return a node
 * @head: singly liist
 * @idx: position of node to be added
 * @n: int value to node
 * Return: new head node data or 0 if singly list is empty
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *h = *head;
	listint_t *pointerchain = NULL;
	unsigned int i = 0;

	pointerchain = malloc(sizeof(listint_t));
	if (!pointerchain)
	{
		return (NULL);
	}
	pointerchain->n = n;
	if (idx == 0)
	{
		pointerchain->next = h;
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
	h->next = pointerchain;
	return (pointerchain);
}
