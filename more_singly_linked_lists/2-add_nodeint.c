#include "lists.h"
/**
 * add_node - print single listed data
 * @head: singly list
 * @str: string
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
