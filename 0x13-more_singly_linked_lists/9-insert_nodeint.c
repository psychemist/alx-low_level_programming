#include "lists.h"
/**
 * get_nodeint_at_index - gets the nth node of a singly linked list
 * @head: head of listint_t linked list
 * @index: nth position of desired node
 * Return: pointer to node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{	unsigned int i = 0;

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
 * insert_nodeint_at_index - inserts a new node at a given linked list position
 * @head: pointer to first node of linked list
 * @idx: index of list where new node should be added
 * @n: integer data for new node
 * Return: pointer to listint_t (address of new node)
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int size = 0;
	listint_t *new_node, *last;

	/* Allocate memory to new list node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	/* Assign data values to new node */
	new_node->n = n;

	/* Traverse list to find its size */
	last = *head;

	while (last != NULL)
	{
		last = last->next;
		size++;
	}

	/* Invalid index */
	if (!idx || idx > size)
	{
		return (NULL);
	}
	/* First node */
	else if (idx == 0)
	{
		new_node->next = last;
		last = new_node;
		size++;
		return (new_node);
	}
	else
	{
		/* Traverse till head is at given index */
		last = get_nodeint_at_index(*head, idx - 1);

		new_node->next = last->next;
		last->next = new_node;
		return (new_node);
	}

	return (NULL);
}

