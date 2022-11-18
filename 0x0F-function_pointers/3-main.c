#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point of operator functions
 * @argc: number of arguments passed to main
 * @argv: array of arguments passed to main
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	int x, z;
	char *y;
	int num;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	x = atoi(argv[1]);
	y = argv[2];
	z = atoi(argv[3]);
	func = (get_op_func)(y);

	if ((func == NULL) || (y[1] != '\0'))
	{
		printf("Error\n");
		exit(99);
	}

	if ((*y == '/' || *y == '%') && (z == 0))
	{
		printf("Error\n");
		exit(100);
	}

	num = func(x, z);
	printf("%d\n", num);

	return (0);
}
