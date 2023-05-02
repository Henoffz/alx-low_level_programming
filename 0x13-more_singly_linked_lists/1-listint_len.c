#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: head of the list
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *ptr;
	size_t length = 0;

	if (h == NULL)
	{
		return (length);
	}

	for (ptr = h; ptr != NULL; ptr = ptr->next)
	{
		length++;
	}

	return (length);
}
