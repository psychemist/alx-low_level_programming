#include <stdio.h>
#include <stdlib.h>
/**
 * check_int - checks if a string is a valid number
 * @args: array of string sto be checked
 * Return: 0 or 1
 */

int check_int(char *args)
{
	int i, check = 0;

	for (i = 0; args[i] != '\0'; i++)
	{
		if (args[i] >= '0' && args[i] <= '9')
		{
			check = 1;
		}
		else
		{
			check = 0;
			return (check);
		}
	}

	return (check);
}

/**
 * main - Prints the name of the program
 * @argc: number of command line arguments
 * @argv: array of size argc
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (!(argc > 1))
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (check_int(argv[i]))
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
