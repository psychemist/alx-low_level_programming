#include "main.h"
/**
 * print_diagonal - prints a diagonal across screen
 * @n: holds the numberof char getting printed
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int i;

	int j;

	i = 0;

	while (i < n && n > 0)
	{
		j = 0;
		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}

	if (i <= 0)
		_putchar('\n');
}
