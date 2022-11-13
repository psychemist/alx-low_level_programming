#include <stdio.h>
#include <stdlib.h>
/**
 * main - calculates the minimum number of coins to make change for an amount
 * @argc: number of program arguments
 * @argv: array of program arguments
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	int num, div = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("%d\n", 0);
		return (1);
	}
	if (num >= 25)
	{
		div += num / 25;
		num %= 25;
	}
	if (num >= 10 && num <= 24)
	{
		div += num / 10;
		num %= 10;
	}
	if (num >= 5 && num <= 9)
	{
		div += num / 5;
		num %= 5;
	}
	if (num >= 2 && num <= 4)
	{
		div += num / 2;
		num %= 2;
	}
	if (num >= 0 && num <= 1)
	{
		div += num / 1;
	}
	printf("%d\n", div);
	return (0);
}
