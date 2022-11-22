#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - returns the length of the string that was passed
 * @s: pointer to a char
 * Return: integer (length of string)
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
 * add_node_end - adds a new node to the end of a linked list
 * @head: head node of the list
 * @str: pointer to a char [array]
 * Return: pointer to a list_t struct
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;

	/* Create new list node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	if (str == NULL)
		return (NULL);

	/* Set values of new node */
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = _strlen(str);
	/* Set tail of node to NULL pointer */
	new_node->next = NULL;

	/* Set first element in list */
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		list_t *last = *head;

		/* Traverse list and set new element at bottom of list */
		while (last->next != NULL)
			last = last->next;

		last->next = new_node;
	}

	return (new_node);
}
