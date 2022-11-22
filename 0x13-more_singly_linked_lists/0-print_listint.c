#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all elements of a linked list
 * @h: head of linked list of integers
 * Return: number of nodes in linked list
 */
size_t print_listint(const listint_t *h)
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
