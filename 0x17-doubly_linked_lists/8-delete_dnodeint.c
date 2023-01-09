#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at given index of doubly linked list
 * @head: pointer to pointer to first node of linked list
 * @index: index of the node that should be deleted, starting at 0
 * Return: 1 (SUCCESS) or -1 (FAIL)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = malloc(sizeof(dlistint_t));

	if (*head == NULL)
		return -1;

	if (index == 0)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
		return (1);
	}

	current = *head;
	while (index != 0)
	{
		index--;
		current = current->next;
	}

	current->prev->next = current->next;
	current->next->prev = current->prev;
	free(current);

	return (1);
}

