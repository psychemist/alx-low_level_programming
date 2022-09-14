#include "main.h"
/**
 * jack_bauer - Prints every hour and minute
 * Description: Prints every minute of Jack Bauer's day, from 00:00 to 23:59.
 * Return: Always (0).
 */

void jack_bauer(void)
{
	int i;

	int j;

	for (i = 0; i <= 23; i++)
	{
	for (j = 0; j <= 59; j++)
	{
		_putchar(i / 10 + '0');
		_putchar(i % 10 + '0');
		_putchar(':');
		_putchar(j / 10 + '0');
		_putchar(j % 10 + '0');
		_putchar('\n');
	}
	}
}
