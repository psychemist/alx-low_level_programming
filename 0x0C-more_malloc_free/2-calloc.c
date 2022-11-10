#include "main.h"
#include <stdlib.h>
/**
  * calloc - allocates memory for an array
  * @nmemb: number of elements of array
  * @size: size of each array element
  * Return: Pointer to allocated memory
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		*(mem + i) = 0;

	return (mem);
}
