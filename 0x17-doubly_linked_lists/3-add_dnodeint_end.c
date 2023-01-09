#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a doubly linked list
 * @head: pointer to pointer to first node of linked list
 * @n: integer value of new list node
 * Return: address of new element (SUCCESS) or NULL (FAIL)
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *current;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		new_node->next = NULL;
		*head = new_node;
	}
	else
	{
		current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}

		new_node->prev = current;
		new_node->next = NULL;
		(current)->next = new_node;
	}

	return (new_node);
}

