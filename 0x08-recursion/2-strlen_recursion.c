#include "main.h"
/**
 *_strlen_recursion- Computes the length of a string
 *@s: Pointer to the string to find its length.
 *Return: Returns length of a string.
 */

int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen_recursion(++s));
}
