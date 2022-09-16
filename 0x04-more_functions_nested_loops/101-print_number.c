#include "main.h"
/**
 * print_number - prints numbers
 * @n: number to be printed
 * Return:void
 */

void print_number(int n)
{

	int x = 1;
	int y = 0;
	int z = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	while (n / x != 0)
	{
		x *= 10;
		y++;
	}
	x = x / 10;

	while (z < y)
	{
		_putchar('0' + n / x);
		n = n - (n / x) * x;
		x = x / 10;
		z++;
	}

	if (y == 0)
		_putchar('0' + n);

}
