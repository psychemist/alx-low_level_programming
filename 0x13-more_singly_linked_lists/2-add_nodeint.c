#include "lists.h"
/**
 * add_nodeint - adds a new node to the beginning of a linked list
 * @head: head node of the list
 * @n: integer value element of list struct
 * Return: pointer to a listint_t struct
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
