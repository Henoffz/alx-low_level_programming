#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the linked list.
 */

void free_list(list_t *head)
{
	if (head != NULL)
	{
		head = head->next;
		free(head->str);
		free(head);
	}
}