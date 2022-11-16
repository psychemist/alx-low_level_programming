#include <stddef.h>
/**
 * array_iterator - executes a function parameter on each array element
 * @array: array of elements to be executed on
 * @size: size of array = sizeof(array) / sizeof(array[0]
 * @action: function pointer to be executed on array elements
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	for (; i < size; i++)
		action(array[i]);
}
