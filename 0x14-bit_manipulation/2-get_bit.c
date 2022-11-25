#include "main.h"
/**
 * get_bit - gets the state of a bit at a given index
 * @n: integer value in base 10
 * @index: index of desired bit
 * Return: integer (value of bit at index) or -1 (error)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int unit;

	unit = n >> index;

	return (unit & 1);
}

