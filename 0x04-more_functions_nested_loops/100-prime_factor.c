#include <stdio.h>
#include <math.h>

/**
 * main - Largest prime factor
 * Return: 0
 */
int main(void)
{
	int i;

	long input = 612852475143;

	for (i = (int) sqrt(input); i > 2; ++i)
	{
		if (input % i == 0)
		{
			printf("%d\n", i);

			break;
		}
	}

	return (0);
}
