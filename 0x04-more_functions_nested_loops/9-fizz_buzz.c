#include <stdio.h>

/**
 * fizzBuzz - Prints numbers 1- 100 followed by a new line
 * Description: Prints fizz for multiples of 3 and Buzz for multiples of five
 * Prints FizzBuzz for multiples of 3 and 5
 * Return: 0
 */

int main(void)
{
	int i;

	i = 1;

	for (; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("%s ", "FizzBuzz");
		else if (i % 3 == 0)
			printf("%s ", "Fizz");
		else if (i % 5 == 0)
			printf("%s ", "Buzz");
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
