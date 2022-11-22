#include "lists.h"
#include <stdlib.h>
#include <strings.h>
/**
 * free_list - frees a linked list
 * @head: head of list_t list to be free'd
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *li;

	while (head != NULL)
	{
		li = head;
		head = li->next;
		free(li->str);
		free(li);
	}
}

