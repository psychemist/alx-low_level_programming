#include "main.h"
/**
 * _puts - Resets pointer to 98
 * @str: pointer to a char
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
