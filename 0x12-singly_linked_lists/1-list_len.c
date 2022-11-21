#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list
 * @h: linked list
 * Return: integer (number of list elements)
 */
size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		count += 1;
		h = h->next;
	}

	return (count);
}

