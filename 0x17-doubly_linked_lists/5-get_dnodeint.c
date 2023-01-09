#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a doubly linked list
 * @head: pointer to the first node of linked list
 * @index: index of the node, starting from 0
 * Return: address of node (SUCCESS) or NULL (FAIL)
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL && i < index)
	{
		head = head->next;
		i++;
	}

	return (head);
}

