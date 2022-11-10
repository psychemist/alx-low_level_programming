#include "main.h"
#include <stdlib.h>
/**
 * _memcpy - Copies memory area
 * @src: source pointer
 * @dest: destination memory area
 * @n: number of bytes to be copied
 *
 * Return: A pointer to destination memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: memory previously allocated with a call using malloc(old_size)
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: size, in bytes, of the new memory block
 *
 * Description: copies the contents to the allocation in range from ptr to size
 * Return: Pointer to the newly allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pointer;

	if (ptr == NULL)
	{
		pointer = malloc(new_size);
	}
	else if (ptr != NULL)
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
		if (new_size == old_size)
			return (ptr);

		pointer = malloc(new_size);

		if (new_size < old_size)
			_memcpy(pointer, ptr, new_size);
		if (new_size > old_size)
			_memcpy(pointer, ptr, old_size);
		free(ptr);
	}
	return (pointer);
}
