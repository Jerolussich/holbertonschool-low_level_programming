#include "lists.h"
/**
 * free_listint - free list
 * @head: linked list
 */

void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		free_dlistint(head->next);
		free(head);
	}
}
