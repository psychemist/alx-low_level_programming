#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints alphabet in lowercase and uppercase and a new line
 * Return: 0 (Success)
 */
int main(void)
{
	int alpha = 97;
	char ALPHA = 'A';

	while (alpha <= 122)
	{
		putchar(alpha);
		alpha++;
	}
	
	for (; ALPHA <= 'Z'; ALPHA++)
	{
		putchar(ALPHA);
	}
	putchar('\n');
	return (0);
}
