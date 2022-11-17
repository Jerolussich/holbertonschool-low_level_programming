#include "lists.h"
/**
 * print_list - print single listed data
 * @h: pointer to a module
 * Return: modules found
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *pointerchain = NULL;

	pointerchain = malloc(sizeof(list_t));
	if (!pointerchain)
		return (NULL);
	
	if (!head)
	{
		*head = pointerchain;
		(*head)->str = strdup(str);
		(*head)->next = NULL;
	}
	else
	{	
		pointerchain->next = *head;
		pointerchain->str = strdup(str);
	}

	return (*head);
}
