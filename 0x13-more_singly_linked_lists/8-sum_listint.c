#include "lists.h"
/**
 * sum_listint - sums all the data in a singly linked list
 * @head: pointer to fitst node of a listint_t linked list of integers
 * Return: integer (sum of integers)
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head->next != NULL)
	{
		sum += head->next->n;
		head = head->next;
	}

	return (sum);
}

