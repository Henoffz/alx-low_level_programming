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
	listint_t *a, *b;

	if (!head)
		return (NULL);

	a = NULL;
	while (*head)
	{
		b = (*head)->next;
		(*head)->next = a;
		a = *head;
		*head = b;
	}
	*head = a;
	return (*head);
}
