#include "main.h"

/**
 * print_square - check for size of square
 * @n : number of _ to be printed
 * Return:void
 */

void print_square(int n)
{
	int x, y;

	for (x = 1; x <= n; x++)
	{
		for (y = 1; y <= n; y++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

	if (n == 0)
		_putchar('\n');
}
