#include "main.h"
#include <stdlib.h>
/**
 * str_concat - Concatenates two strings
 * @s1: source string
 * @s2: destination string
 *
 * Description: Allocates new memory space containing s1, s2 and null byte
 * Return: Pointer to destination string
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int a, b, len;

	a = b = len = 0;

	if (s1 == NULL)
		s1[a] = '\0';
	if (s2 == NULL)
		s2[b] = '\0';
	while (s1[a])
		a++;
	while (s2[b])
		b++;
	len = a + b;
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	for (a = 0; s1[a]; a++)
		*(str + a) = *(s1 + a);
	for (b = 0; s2[b]; b++)
	{
		*(str + a) = *(s2 + b);
		a++;
	}
	str[a] = '\0';
	return (str);
}
