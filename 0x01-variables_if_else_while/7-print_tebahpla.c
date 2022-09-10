#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints the lowercase alphabet in reverse with a new line
 * Return: 0 (Success)
 */
int main(void)
{
	int alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');
	return (0);
}
