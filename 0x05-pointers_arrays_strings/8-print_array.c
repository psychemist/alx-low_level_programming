#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n element of an array of integers.
 *
 * @a: Pointer to an int
 *
 * @n: variable
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i + 1 != n)
		{
			printf(", ");
		}
	}
	printf("\n");
}
