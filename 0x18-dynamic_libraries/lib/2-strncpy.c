#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: dest string
 * @src: src string
 * @n: integer n
 * Return: strncpy
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; n > i; i++)
		dest[i] = '\0';

	return (dest);
}
