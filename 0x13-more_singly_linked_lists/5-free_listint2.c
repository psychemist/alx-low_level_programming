#include "lists.h"
/**
 * free_listint2 - frees a singly linked list
 * @head: pointer to the head of a listint_t list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *li;

	while (*head != NULL)
	{
		li = *head;
		*head = li->next;
		free(li);
	}

	*head = NULL;
}

