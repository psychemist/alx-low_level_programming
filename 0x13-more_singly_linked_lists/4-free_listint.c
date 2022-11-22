#include "lists.h"
/**
 * free_listint - frees a singly linked list
 * @head: pointer to the head of a listint_t list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *li;

	while (head != NULL)
	{
		li = head;
		head = li->next;
		free(li);
	}
}

