#include "lists.h"
/**
 *  delete_dnodeint_at_index - delete a node
 * @head: linked liist
 * @index: position of node to be deleted
 * Return: 1 succesful or -1 not succesful
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	listint_t *h = *head;
	listint_t *b;
	unsigned int i = 0;

	if (!h)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(h);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (!h->next)
			return (-1);
		h = h->next;
	}
	b = h->next;
	h->next = b->next;
	free(b);
	return (1);
}
