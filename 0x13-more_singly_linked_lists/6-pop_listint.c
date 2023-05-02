#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - delete the head node of a linked list.
 * @head: head of the list
 *
 * Return: nothing
 */

int pop_listint(listint_t **head)
{
	int n;

	if (*head == NULL)
	{
		return (0);
	}
	n = (*head)->n;
	*head = (*head)->next;
	return (n);
}
