#include "lists.h"
/**
 * delete_dnodeint_at_index - delete a node at the index of a linked list
 * @head: pointer to head of the liked list
 * @index: position on the linked list
 * Return: 1 if successful and -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *old;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	old = *head;

	for (i = 0; old != NULL && i < index; i++)
		old = old->next;
	if (old == NULL)
		return (-1);
	if (*head == old)
		*head = old->next;
	if (old->next != NULL)
		old->next->prev = old->prev;
	if (old->prev != NULL)
		old->prev->next = old->next;
	free(old);
	return (1);
}
