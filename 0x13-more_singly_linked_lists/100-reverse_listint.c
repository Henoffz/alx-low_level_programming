#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 * @head: head of a list.
 *
 * Return: pointer to the head.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *a = NULL;
	listint_t *b = NULL;

	if (head)
	{
		while (*head != NULL)
		{
			b = *head;
			*head = (*head)->next;
			b->next = a;
			a = b;
		}
		*head = a;
		return (*head);
	}

	return (NULL);
}

