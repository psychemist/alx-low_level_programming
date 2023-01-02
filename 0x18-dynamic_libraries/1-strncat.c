#include "main.h"
/**
 * _strncat - Concatenates 2 strings
 * @dest: destination string
 * @src: souece string
 * @n: input variable
 * Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{

	}

	for (j = 0; j < n; j++)
	{
		dest[i + j] = src[j];

		if (src[j] == '\0')
			j = n;
	}

	return (dest);
}
