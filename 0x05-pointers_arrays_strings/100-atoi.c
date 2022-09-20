#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: char type string
 * Return: integer converted
 */

int _atoi(char *s)
{
	int sign = 1, res = 0, first, i;

	for (first = 0; !(s[first] >= 48 && s[first] <= 57); first++)
	{
		if (s[first] == '-')
		{
			sign *= -1;
		}
	}

	for (i = first; s[i] >= 48 && s[i] <= 57; i++)
	{
		res *= 10;
		res += (s[i] - 48);
	}

	return (sign * res);
}
