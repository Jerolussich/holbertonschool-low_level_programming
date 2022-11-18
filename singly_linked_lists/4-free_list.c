#include "lists.h"
/**
 * free_list - free list
 * @head: singly list
 */

void free_list(list_t *head)
{
	if (head->next)
	{
		free_list(head->next);
		free(head);
	}
}
