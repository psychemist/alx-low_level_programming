#include "lists.h"
/**
 * free_dlistint - 
 * @head: pointer to first node of doubly linked list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;
	
	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node);
	}
}

