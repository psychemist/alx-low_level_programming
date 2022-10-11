#include <stdio.h>
/**
 * main - Prints the name of the program
 * @argc: number of command line arguments
 * @argv: array of size argc
 * Return: 0 (Success)
 */
int main(int argc, char *argv[] __attribute__ ((unused)))
{
	/* (void)argv -- also used to ignore unused variables */
	int i;
	int sum;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			sum += 1;
		}
	}
	else
		sum = 0;

	printf("%d\n", sum);
	return (0);
}
