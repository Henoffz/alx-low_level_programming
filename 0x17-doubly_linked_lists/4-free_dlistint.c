#include "lists.h"
/**
 * free_dlistint - frees a list.
 * @head: pointer to list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *free_node;

	while (head != NULL)
	{
		free_node = head->next;
		free(head);
		head = free_node;
	}
}
