#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints all numbers of base 16 in lowercase with a new line
 * Return: 0 (Success)
 */
int main(void)
{
	int num = 0;
	char alpha = 'a';

	while (num < 10)
	{
		putchar(48 + num);
		num++;
	}
	while (alpha <= 'f')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
