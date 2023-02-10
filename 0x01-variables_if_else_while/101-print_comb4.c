#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: Prints all possible different combinations of three digits
 * Print only the smallest combination of three digits
 * Numbers should be printed in ascending order, with three digits
 * Return: 0 (Success)
 */
int main(void)
{
	int x = 0;
	int y;
	int z;

	while (x < 10)
	{
		y = 0;
		while (y < 10)
		{
			z = 0;
			while (z < 10)
			{
				if (x < y && y < z && x < z)
				{
					putchar(x + '0');
					putchar(y + '0');
					putchar(z + '0');

					if (x + y + z < 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				z++;
			}
			y++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
