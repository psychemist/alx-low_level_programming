#include "main.h"
/**
 * get_bit - gets the state of a bit at a given index
 * @n: integer value in base 10
 * @index: index of desired bit
 * Return: integer (value of bit at index) or -1 (error)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int unit, max_bits;

	max_bits = sizeof(unsigned long int) * 8;

	if (index > max_bits)
		return (-1);

	unit = n >> index;
	/* or, unit = ((n >> index) & 1) => return (unit) */

	return (unit & 1);
}

