#include "main.h"
/**
 * _strcpy - copying strings
 * @src: Pointer to an char
 *
 * @dest: pints to a char
 *
 * Return: Always (0)
 *
 */
char *_strcpy(char *dest, char *src)
{
	int i;


	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}


	dest[i] = '\0';

	return (dest);
}
