#include "main.h"
/**
 * print_line - prints a line across screen
 * @n: holds the numberof char getting printed
 * Return: Always 0.
 */
void print_line(int n)
{
	int x;

	for (x = 1; x <= n; x++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
