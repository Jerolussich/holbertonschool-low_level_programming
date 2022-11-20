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
	listint_t *b = *head;
	listint_t *pointerchain = NULL;
	unsigned int j = 0;
	unsigned int i = 0;

	if (!h)
	{
		add_nodeint(head, n);
		return (*head);
	}

	else
	{
		while (h->next && i < idx)
		{
			h = h->next;
			i++;
		}
		while (b->next && j < (idx - 1))
		{
			b = b->next;
			j++;
       		}
	
		pointerchain = malloc(sizeof(listint_t));
		if (!pointerchain)
		{
			free(pointerchain);
			return (NULL);
		}
		pointerchain->n = n;
		pointerchain->next = h;
		b->next = pointerchain;
	}
	
	return (pointerchain);
}
