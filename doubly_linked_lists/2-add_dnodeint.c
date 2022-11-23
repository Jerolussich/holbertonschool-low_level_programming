#include "lists.h"
/**
 * add_nodeint - add node at the beginning
 * @head: linked list
 * @n: int given
 * Return: address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *pointerchain = NULL;

	pointerchain = malloc(sizeof(dlistint_t));
	if (!pointerchain)
	{
		free(pointerchain);
		return (NULL);
	}
	else
	{
		pointerchain->prev = NULL;
		pointerchain->next = *head;
		pointerchain->n = n;
	}
	*head = pointerchain;

	return (*head);
}
