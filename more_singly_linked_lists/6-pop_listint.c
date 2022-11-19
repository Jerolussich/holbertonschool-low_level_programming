#include "lists.h"
/**
 * pop_listint - delete head node
 * @head: singly list
 * Return: head node data or 0 if singly list is empty
 */

int pop_listint(listint_t **head)
{
	int i;
	listint_t *h = *head;

	if (!h)
		return (0);
	*head = (*head)->next;
	i = (*head)->n;
	free(h);
	return (i);
}
