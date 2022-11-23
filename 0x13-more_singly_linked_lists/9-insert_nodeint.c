#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given linked list position
 * @head: pointer to first node of linked list
 * @idx: index of list where new node should be added
 * @n: integer data for new node
 * Return: pointer to listint_t (address of new node)
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i, index = idx - 1;
	listint_t *node, *last;

	if (*head == NULL && idx == 0)
		add_nodeint_end(head, n);

	last = *head;

	for (i = 0; (i < index) && (last != NULL); i++)
		last = last->next;

	if (i == index)
	{
		node = malloc(sizeof(listint_t));
		if (node == NULL)
			return (NULL);

		node->n = n;
		node->next = last->next;
		last->next = node;
		return (node);
	}

	return (NULL);
}

