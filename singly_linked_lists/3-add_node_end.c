#include "lists.h"
#include "2-add_node.c"
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

	if (!h)
	{
		add_node(head, str);
		return (*head);

	}
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

	pointerchain->str = strdup(str);
	pointerchain->len = strlen(str);
	pointerchain->next = NULL;

	if (!head)
		*head = pointerchain;
	else
		h->next = pointerchain;

	return (pointerchain);
}
