#include "lists.h"
/**
 *  delete_dnodeint_at_index - delete a node
 * @head: linked liist
 * @index: position of node to be deleted
 * Return: 1 succesful or -1 not succesful
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *previndexnode = *head;
	dlistint_t *indexnode;
	dlistint_t *fowardindexnode;
	unsigned int i = 0;

	if (!previndexnode)
		return (-1);

	if (index == 0 && previndexnode->next == NULL)
	{
		free(previndexnode);
		*head = NULL;
		return (1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(previndexnode);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (!previndexnode->next)
			return (-1);
		previndexnode = previndexnode->next;
	}
	indexnode = previndexnode->next;
	previndexnode->next = indexnode->next;
	fowardindexnode = indexnode->next;
	fowardindexnode->prev = previndexnode;

	free(indexnode);
	return (1);
}
