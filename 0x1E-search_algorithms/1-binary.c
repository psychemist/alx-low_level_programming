#include "search_algos.h"

/**
 * binary_search - finds value in sorted int array with Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for in array
 * Return: index where value is located or -1 (NULL array or missing value)
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i;
	size_t l = 0;
	size_t r = size - 1;

	while (l <= r)
	{
		size_t m = (l + r)/ 2;

		/* Print array on each search iteration */
		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			printf("%d", array[i]);

			if (i != r)
				printf(", ");
			else
				printf("\n");
		}

		/* Search for and return value or halve array if not found */
		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			r = m - 1;
		else
			return (m);
	}

	return (-1);
}
