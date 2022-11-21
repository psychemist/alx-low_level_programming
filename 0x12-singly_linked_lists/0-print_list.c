#include "lists.h"
#include <stdio.h>
/**
 * check_next - checks how many nodes are in a linked list
 * @li: head of linked list structure
 * @k: number of existing nodes
 * Return: integer (number of nodes in singly linked list)
 */
unsigned int check_next(const list_t *li, unsigned int k)
{
	unsigned int x = k;
	list_t *nxt;

	nxt = li->next;

	if (nxt == NULL)
		return (0);
	else
		++x;
	check_next(nxt, x);
	return (x);
}

/**
 * print_list - prints all elements of a linked list
 * @h: pointer to list node
 * Return: integer (number of nodes)
 */
size_t print_list(const list_t *h)
{
	char *s;
	unsigned int i, j, k = 1;
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
	j = check_next(h, k);

	return (j);
}

