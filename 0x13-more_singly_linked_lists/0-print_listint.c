#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: head of the list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i;
	const listint_t *ptr;

	for (i = 0, ptr = h; ptr != NULL; ptr = ptr->next, i++)
	{
		printf("%d\n", ptr->n);
	}

	return (i);
}
