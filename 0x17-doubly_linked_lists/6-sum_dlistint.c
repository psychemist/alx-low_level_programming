#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n) of a doubly linked list
 * @head: pointer to the first node of a dlistint_t linked list
 * Return: integer (sum of all node data values) or 0 (if empty)
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

