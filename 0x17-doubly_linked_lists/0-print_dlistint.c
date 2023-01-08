#include "lists.h"
/**
 * print_dlistint - prints all the elements of a doubly linked list
 * @h: pointer to first node in doubly linked list
 * Return: integer (number of nodes)
 */
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}

