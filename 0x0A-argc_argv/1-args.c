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
	printf("%d\n", argc);
	return (0);
}
