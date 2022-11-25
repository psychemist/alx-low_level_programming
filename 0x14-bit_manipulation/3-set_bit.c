#include "main.h"
/**
 * set_bit - sets the value of a bit at a given index too 1
 * @n: pointer to an integral number
 * @index: index of desired bit
 * Return: 1 (success) or -1 (error)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n >> index == 0)
		return (-1);

	*n |= (1 << index);

	return (1);
}

