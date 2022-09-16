#include "main.h"

/**
 * print_triangle - print triangle
 * @size: input
 */
void print_triangle(int size)
{
	int i = 1;
	int j, k;

	while (i <= size && size > 0)
	{
		j = 0;
		while (j < size - i)
		{
			_putchar(' ');
			j++;
		}
		k = 0;
		while (k < i)
		{
			_putchar('#');
			k++;
		}

		_putchar('\n');
		i++;
	}
	if (i == 1)
		_putchar('\n');
}
