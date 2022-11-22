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
 * add_node - adds a new node to the beginning of a linked list
 * @head: head node of the list
 * @str: pointer to a char [array]
 * Return: pointer to a list_t struct
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	if (str == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = _strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}
