#include "lists.h"

/**
 * get_dnodeint_at_index - gets the nth node of linked list
 * @head: pointer to the beginning of the list
 * @index: position of the node
 * Return: head
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; head != NULL && i < index; i++)
	{
		head = head->next;
	}
	return (head);
}
