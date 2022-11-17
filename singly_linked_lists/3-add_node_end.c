#include "lists.h"
/**
 * add_node_end - add node on end of list
 * @head: singly list
 * @str: string
 * Return: modules found
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *pointerchain = NULL;
	list_t *h = *head;

	while (h->next)
	{
		h = h->next;
	}
	pointerchain = malloc(sizeof(list_t));
	if (!pointerchain)
	{
		free(pointerchain);
		return (NULL);
	}
	if (!head)
	{
		pointerchain->str = strdup(str);
		pointerchain->next = NULL;
		pointerchain->len = strlen(str);
		*head = pointerchain;
	}
	else
	{
		h->next = pointerchain;
		pointerchain->next = NULL;
		pointerchain->str = strdup(str);
		pointerchain->len = strlen(str);
	}

	return (pointerchain);
}
