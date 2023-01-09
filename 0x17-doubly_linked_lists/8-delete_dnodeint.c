#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at given index of doubly linked list
 * @head: pointer to pointer to first node of linked list
 * @index: index of the node that should be deleted, starting at 0
 * Return: 1 (SUCCESS) or -1 (FAIL)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *del;

	if (*head == NULL)
		return (-1);

	del = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(del);
		if (*head != NULL)
			(*head)->prev = NULL;
		return (1);
	}

	for (i = 0; i < index && del->next != NULL; i++)
		del = del->next;

	if (i == index)
	{
		del->prev->next = del->next;
		if (del->next != NULL)
			del->next->prev = del->prev;
		free(del);
		return (1);
	}

	return (-1);
}

