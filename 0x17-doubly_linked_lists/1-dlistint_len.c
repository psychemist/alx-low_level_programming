#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a doubly linked list
 * @h: pointer to first node of list
 * Return: integer (number of nodes)
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}

