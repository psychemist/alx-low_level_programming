#include "lists.h"
/**
 * get_nodeint_at_index - gets the nth node of a singly linked list
 * @head: head of listint_t linked list
 * @index: nth position of desired node
 * Return: pointer to node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while ((i < index) && (head != NULL))
	{
		head = head->next;
		i++;
	}

	if (i == index)
		return (head);
	return (NULL);
}

/**
 * delete_nodeint_at_index - deletes the node at a given index of a linked list
 * @head: pointer to the first node of a listint_t singly linked list
 * @index: index of node to be deleted
 * Return: Success (1) or Failure (-1)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev, *next;

	if (head == NULL)
		return (-1);

	current = get_nodeint_at_index(*head, index);
	if (current == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	else
	{
		prev = get_nodeint_at_index(*head, index - 1);
		next = get_nodeint_at_index(*head, index + 1);

		if (prev == NULL)
		{
			return (-1);
		}
		else if (next == NULL)
		{
			prev->next = NULL;
			free(current);
			free(next);
		}
		else
		{
			prev->next = next;
			free(current);
		}
	}
	return (1);
}

