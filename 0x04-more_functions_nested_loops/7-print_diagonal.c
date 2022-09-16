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

	while (n > 0)
	{
		j = i;
		while (j > 0)
		{
			_putchar(' ');
			j--;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
		n--;
	}

	if (i < 1)
		_putchar('\n');
}
