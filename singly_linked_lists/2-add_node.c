#include "lists.h"
/**
 * add_node - print single listed data
 * head: singly list
 * @str: string
 * Return: modules found
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *pointerchain = NULL;

	pointerchain = malloc(sizeof(list_t));
	if (!pointerchain)
	{
		free(pointerchain);
		return (NULL);
	}
	if (!head)
	{
		(*head)->str = strdup(str);
		(*head)->next = NULL;
	}
	else
	{
		pointerchain->next = *head;
		pointerchain->str = strdup(str);
		pointerchain->len = strlen(str);
	}
	*head = pointerchain;

	return (*head);
}
