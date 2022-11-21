#include "lists.h"
#include <stdio.h>
/**
 * check_next - checks how many nodes are in a linked list
 * @li: head of linked list structure
 * @k: number of existing nodes
 * Return: integer (number of nodes in singly linked list)
 */
size_t check_next(const list_t *li, unsigned int k)
{
	unsigned int x = k;

	if (li->next == NULL)
		return (x);

	return ((check_next(li->next, x + 1)));
}

/**
 * print_list - prints all elements of a linked list
 * @h: pointer to list node
 * Return: integer (number of nodes)
 */
size_t print_list(const list_t *h)
{
	char *s;
	unsigned int i, j;
	list_t *ptr;

	if (h == NULL)
		return (0);

	s = h->str;
	i = h->len;
	ptr = h->next;

	if (s == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%d] %s\n", i, s);
	if (ptr == NULL)
		return (1);
	printf("[%d] %s\n", h->next->len, ptr->str);

	print_list(ptr->next);

	/* check if list has a valid next element */
	j = check_next(h, 1);

	return (j);
}

