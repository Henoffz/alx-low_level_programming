#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a list.
 * @head: pointer to first node.
 * @n: data.
 * Return: new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *old_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		old_node = *head;
		while (old_node->next != NULL)
			old_node = old_node->next;
		old_node->next = new_node;
		new_node->prev = old_node;
	}
	return (new_node);
}
