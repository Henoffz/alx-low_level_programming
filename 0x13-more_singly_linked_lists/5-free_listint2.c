#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head of the list
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;
	while (current != NULL)
	{
		current = *head;
		*head = current->next;
		free(current);
	}
	*head = NULL;
}
