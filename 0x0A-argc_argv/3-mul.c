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
	int mul;
	int arg1, arg2;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		arg1 = atoi(argv[1]);
		arg2 = atoi(argv[2]);
		mul = arg1 * arg2;
		printf("%d\n", mul);
	}
		return (0);
}
