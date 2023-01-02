#include "main.h"
/**
 * _strlen - Returns the lengh of the string that was passed
 *
 * @s: Pointer to a char
 *
 * Return: (0)
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}
