#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at a given position.
 * @head: head of the list
 * @idx: list's index to accomodate the new node
 * @n: new node value
 * Return: node pointer.Otherwise NULL.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *previous = NULL;
	listint_t *current = *head;
	listint_t *new;

	while (current != NULL && i < idx)
	{
		previous = current;
		current = current->next;
		i++;
	}

	if (i < idx)
	{
		return (NULL);
	}

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = current;

	if (previous == NULL)
	{
		*head = new;
	}

	else
	{
		previous->next = new;
	}

	return (new);
}
