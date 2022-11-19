#include "lists.h"
/**
 * get_nodeint_at_index - return a node
 * @head: singly list
 * @index: node to be found
 * Return: head node data or 0 if singly list is empty
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *h = head;
	unsigned int i = 0;

	if (!h)
		return (0);
	while (h->next && i < index)
	{
		h = h->next;
		i++;
	}
	if (i < index)
	{
		return (0);
	}
	return (h);
}
