#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: pointer to a char
 * Return: integer (string length)
 */

int _strlen(const char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a constant char
 * Return: unsigned decimal integer or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len = 0, dec = 0, base = 1;
	int i;

	if (b == NULL)
		return (0);

	len = _strlen(b);

	for (i = len - 1; i >= 0; i--)
	{
		if ((b[i] != '0') && (b[i] != '1'))
		{
			return (0);
		}
		if (b[i] == '1')
		{
			dec += (1 * base);
		}
		base *= 2;
	}

	return (dec);
}

