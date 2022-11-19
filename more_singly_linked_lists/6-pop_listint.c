#include "lists.h"
/**
 * pop_listint - delete head node
 * @head: singly list
 * Return: head node data or 0 if singly list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *h = *head;
	int i = 0;

	if (!h)
		return (0);
	for (i = 0; i < 1 && h->next; i++)
	{
		h = h->next;
	}
	free(head);
	*head = h;
	return ((*head)->n);
}
