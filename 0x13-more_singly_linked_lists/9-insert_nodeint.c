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
	unsigned int i = 0;
	listint_t *new_node, *temp;

	if (head == NULL)
		return (NULL);

	/* Allocate memory to new list node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	/* Assign data values to new node */
	new_node->n = n;

	/* First node */
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	else
	{
		temp = *head;
		/* Traverse list till head is at given index */
		while (i < (idx - 1))
		{
			temp = temp->next;
			if (temp == NULL)
			{
				free(new_node);
				return (NULL);
			}
			i++;
		}
	}
	/* Assign node to list position at index */
	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}

