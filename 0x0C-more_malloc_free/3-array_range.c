#include "main.h"
#include <stdlib.h>
/**
 * array_range - Creates an array of integers
 * @min: mininum integer in range
 * @max: maximum integer in range
 * Return: Pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *buffer;
	int i, len;

	if (min > max)
		return (NULL);

	len = (max - min) + 1;
	buffer = malloc(sizeof(int) * len);
	if (buffer == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		buffer[i] = min;
		min++;
	}

	return (buffer);
}
