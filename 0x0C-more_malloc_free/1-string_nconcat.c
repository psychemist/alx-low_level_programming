#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - Returns the length of a string
 * @s: Pointer to a char which is the address of s[0]
 * Return: Length of passed string
 */

unsigned int _strlen(char *s)
{
	unsigned int len = 0;

	while (s[len])
		len++;
	return (len);
}

/**
 * string_nconcat - Concatenates two strings
 * @s1: Destination string
 * @s2: Source string
 * @n: Number of bytes to be copied
 * Return: Pointer to a string that contains s1 and n characters copied from s2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len += _strlen(s1);

	if (n >= _strlen(s2))
		n = _strlen(s2);
	len += (n + 1);

	str = malloc(sizeof(*str) * len);
	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		str[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';
	return (str);
}
