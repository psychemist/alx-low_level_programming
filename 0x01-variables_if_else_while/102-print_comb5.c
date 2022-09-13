#include <stdio.h>
/**
 ** main - Entry point
 * Description - Prints all possible combinations of two two-digit numbers
 * All numbers should be printed with two digits. 1 should be printed as 01
 * The combinations of numbers should be printed in ascending order.
 * Return: 0 (Success)
 */
int main(void)
{
	int x;
	int y;
	int a;
	int b;

	for (x = '0'; x <= '9'; x++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			for (a = x; a <= '9'; a++)
			{
				for (b = y + 1; b <= '9'; b++)
				{
					putchar(x);
					putchar(y);
					putchar(' ');
					putchar(a);
					putchar(b);

					if (!((x == '9' && y == '8') &&
					      (a == '9' && b == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
				b = '0';
			}
		}
	}
	putchar('\n');
	return (0);
}
