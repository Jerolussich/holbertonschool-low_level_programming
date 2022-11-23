#include "lists.h"
/**
 * add_dnodeint_end - add node on end of list
 * @head: linked list
 * @n: int const
 * Return: address of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *pointerchain = NULL;
	dlistint_t *h = *head;
	int i = 0;

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
	pointerchain = malloc(sizeof(dlistint_t));
	if (!pointerchain)
	{
		free(pointerchain);
		return (NULL);
	}
	pointerchain->n = n;
	pointerchain->next = NULL;
	pointerchain->prev = h;
	h->next = pointerchain;
	if (!head)
		*head = pointerchain;
	else
		h->next = pointerchain;

	return (pointerchain);
}
