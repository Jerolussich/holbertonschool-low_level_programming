#include "lists.h"
#include "2-add_dnodeint.c"
/**
 * add_nodeint_end - add node on end of list
 * @head: linked list
 * @n: int const
 * Return: modules found
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *pointerchain = NULL;
	dlistint_t *h = *head;
	dlistint_t *b = *head;
	int i = 0, j = 0;

	if (!h)
	{
		add_dnodeint(head, n);
		return (*head);

	}
	while (h->next)
	{
		h = h->next;
		i++;
	}
	while (j < i - 1)
	{
		b = h->next;
		j++;
	}
	pointerchain = malloc(sizeof(dlistint_t));
	if (!pointerchain)
	{
		free(pointerchain);
		return (NULL);
	}

	pointerchain->n = n;
	pointerchain->next = NULL;
	pointerchain->prev = b;

	if (!head)
		*head = pointerchain;
	else
		h->next = pointerchain;

	return (pointerchain);
}
