#include "lists.h"
/**
 * add_nodeint - print int node list
 * @head: singly list
 * @n: int given
 * Return: modules found
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *pointerchain = NULL;

	pointerchain = malloc(sizeof(listint_t));
	if (!pointerchain)
	{
		free(pointerchain);
		return (NULL);
	}
	else
	{
		pointerchain->next = *head;
		pointerchain->n = n;
	}
	*head = pointerchain;

	return (*head);
}
