#include "lists.h"
/**
 * free_listint - free list
 * @head: singly list
 */

void free_listint(listint_t *head)
{
	if (head)
	{
		free_listint(head->next);
		if (head->n)
		{
			free(head->n);
		}
			free(head);
	}
}
