#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked list
 * @h: pointer to head of linked list of integers
 * Return: integer (number of list elements)
 */
size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}

