#include "search_algos.h"

/**
 * linear_search - searches for value in int array with Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for in array
 * Return: first index where value is located or -1 (NULL array or no value)
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		/* Print value at array index on each iteration */
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		/* Compare number at each index to value and return if found */
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
