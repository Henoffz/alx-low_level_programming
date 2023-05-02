#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list.
 * @head: head of the list
 * @index: outcome from searching the link list
 * Return: specific node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head != NULL; i++, head = head->next)
	{
		if (i == index)
		{
			return (head);
		}

	}
	return (NULL);
}
