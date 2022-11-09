#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Creates a duplicate of a string
 * @str: Source string
 *
 * Description: Allocates space in memory that contains a copy of a string
 * Return: Pointer to duplicate string
 */

char *_strdup(char *str)
{
	char *dupl;
	int i;
	int len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len])
		len++;
	dupl = malloc(sizeof(char) * (len + 1));
	if (dupl == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
		dupl[i] = str[i];
	dupl[len] = '\0';
	return (dupl);
}
