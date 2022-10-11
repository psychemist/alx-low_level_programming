#include <stdio.h>
/**
 * main - Prints the name of the program
 * @argc: number of command line arguments
 * @argv: array of size argc
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
