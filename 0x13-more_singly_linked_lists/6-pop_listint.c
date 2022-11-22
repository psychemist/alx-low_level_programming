#include "lists.h"
/**
 * pop_listint - deletes the head node of a singly linked list
 * @head: pointer to head of listint_t linked list
 * Return: integer (listint_t->n)
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *li;

	if (*head == NULL)
		return (0);

	li = *head;
	n = li->n;
	*head = li->next;
	free(li);

	return (n);
}

