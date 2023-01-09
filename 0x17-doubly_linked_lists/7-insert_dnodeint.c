#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to pointer of first node of a doubly linked list
 * @idx: index of the list where the new node should be added, starting at 0
 * @n: data value of new node
 * Return: address of the new node (SUCCESS) or NULL (FAIL)
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int index = 0;
	dlistint_t *new_node, *current;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (*h == NULL)
		return (NULL);
	current = *h;

	while (current != NULL && index < idx)
	{
		current = current->next;
		index++;
	}

	new_node->prev = current;
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}

