#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of characters
 * @size: size of array
 * @c: initial character of array
 *
 * Description: creates array of chars and initializes it with a specific char
 * Return: pointer to address of char 'c'
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(*s) * size);
	if (size == 0)
		return (NULL);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
	free(s);
}
