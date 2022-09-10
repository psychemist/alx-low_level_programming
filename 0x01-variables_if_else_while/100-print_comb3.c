#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: Prints all possible different combinations of two digits
 * Print only the smallest combination of two digits
 * Numbers should be printed in ascending order, with two digits
 * Return: 0 (Success)
 */
int main(void)
{
	int c = 0;
	int d;

	while (c < 10)
	{
		d = 0;
		while (d < 10)
		{
			if (c < d && c != d)
			{
				putchar(c + '0');
				putchar(d + '0');

				if (c + d < 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			d++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}
