#include "lists.h"

/**
 * dlistint_len - find the length of the list
 * @h: pointer to the list
 * Return: the number of elements on the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
		h = h->next;

	return (i);
}
