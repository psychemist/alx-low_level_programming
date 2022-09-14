#include "main.h"
/**
 * print_last_digit - print last digit of given number
 * @l: stores last number
 * Return: Always (0).
 */

int print_last_digit(int l)
{
	int last;

	if (l < 0)
	{
		last = (-1 * (l % 10));
		_putchar (last + '0');
		return (last);
	}
	else
	{
		last = (l % 10);
		_putchar (last + '0');
		return (last);
	}
}
