#include "main.h"
/**
 * _memcpy - Copies memory area
 *
 * @src: Src
 *
 * @dest: Dest memory area
 *
 * @n: Numb of bytes
 *
 * Return: A pointer to Dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
