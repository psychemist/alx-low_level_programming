#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints the alphabet in lowercase with a new line at the end
 * Return: 0 (Success)
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
