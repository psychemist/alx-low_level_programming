#include "lists.h"
/**
 * get_nodeint_at_index - gets the nth node of a singly linked list
 * @head: head of listint_t linked list
 * @index: nth position of desired node
 * Return: pointer to node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while ((i < index) && (head != NULL))
	{
		head = head->next;
		i++;
	}

	if (i == index)
		node = head;

	return (node);
}

