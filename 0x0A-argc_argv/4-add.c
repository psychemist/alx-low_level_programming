#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the name of the program
 * @argc: number of command line arguments
 * @argv: array of size argc
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, sum;

	if (!(argc > 1))
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
