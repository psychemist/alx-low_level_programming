#include "main.h"
/**
 * main - Entry point
 * Description: Prints putchar, then a new line
 * Return: 0 (Success)
 */
int main(void)
{
	char c[9] = "_putchar";
	int i = 0;

	while (i < 9)
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
