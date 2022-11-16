#include <stdio.h>
/**
 * int_index - searches for an integer
 * @array: array of elements to b e searched
 * @size: number of elements in array = sizef(array) / sizof(array[0])
 * @cmp: compare function
 * Return: integer index of element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}

	return (0);
}
