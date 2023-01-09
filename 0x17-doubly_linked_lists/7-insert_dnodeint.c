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
	dlistint_t *new_node, *temp;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (*h == NULL)
		return (NULL);

	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	else
	{
		temp = *h;
		while (index < (idx - 1))
		{
			temp = temp->next;
			if (temp == NULL)
			{
				free(new_node);
				return (NULL);
			}
			index++;
		}
	}

	new_node->prev = temp;
	new_node->next = temp->next;
	temp->next->prev = new_node;
	temp->next = new_node;

	return (new_node);
}

