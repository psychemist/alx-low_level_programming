#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list
 * @h: linked list
 * Return: integer (number of list elements)
 */
size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	if (h != NULL)
	{
		while (h->next != NULL)
		{
			if (h->str != NULL)
				++count;
			if (h->len)
				++count;
			h = h->next;
		}
	}

	return (count);
}

