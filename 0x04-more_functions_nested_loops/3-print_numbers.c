#include "main.h"

/**
 * print_numbers - Prints the numbers 0-9, followed by a new line
 * @c counter
 * Return: void
 */

void print_numbers(void)
{
	char c;

	for (c = 48; c <= 57; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
