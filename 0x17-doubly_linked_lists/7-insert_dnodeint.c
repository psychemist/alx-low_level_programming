#include "lists.h"
/**
 * insert_dnode - inserts node at a given position
 * @tmp: pointer to node of doubly linked list
 * @n: data value of new node
 * Return: address of inserted node
 */
dlistint_t *insert_dnode(dlistint_t *tmp, int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;

	new_node->prev = tmp->prev;
	new_node->next = tmp;
	tmp->prev->next = new_node;
	tmp->prev = new_node;

	return (new_node);
}

/**
 * insert_dnodeint_at_index - creates and inserts a new node at index
 * @h: pointer to pointer of first node of a doubly linked list
i * @idx: index of the list where the new node should be added, starting at 0
 * @n: data value of new node
 * Return: address of the new node (SUCCESS) or NULL (FAIL)
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp;

	if (h == NULL)
		return (NULL);

	/* insert new node at beginning of empty or existing list */
	if (idx == 0)
		return (add_dnodeint(h, n));

	/* insert new node at middle of list */
	temp = *h;

	while (idx != 0 && temp->next)
	{
		idx -= 1;
		temp = temp->next;
		if (idx == 0)
			return (insert_dnode(temp, n));
	}

	/* insert new node at end of list if idx is after last node */
	if (idx == 1)
		return (add_dnodeint_end(h, n));

	return (NULL);
}

