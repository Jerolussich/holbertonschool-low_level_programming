#include "lists.h"
#include "2-add_nodeint.c"
/**
 * add_node_end - add node on end of list
 * @head: singly list
 * @str: string
 * Return: modules found
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *pointerchain = NULL;
	listint_t *h = *head;

	if (!h)
	{
		add_nodeint(head, n);
		return (*head);

	}
	while (h->next)
	{
		h = h->next;
	}
	pointerchain = malloc(sizeof(listint_t));
	if (!pointerchain)
	{
		free(pointerchain);
		return (NULL);
	}

	pointerchain->n = n;
	pointerchain->next = NULL;

	if (!head)
		*head = pointerchain;
	else
		h->next = pointerchain;

	return (pointerchain);
}
