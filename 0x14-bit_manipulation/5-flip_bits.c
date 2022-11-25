#include "main.h"
/**
 * 
 * 
 *
 */
int check_bits(unsigned long int o)
{
	unsigned int count = 0;

	while (o > 0)
	{
		if ((o & 1) == 1)
			count++;

		o = o >> 1;
	}

	return (count);
}

/**
 * flip_bits - calculates the number of bits to flip to get from one number to another
 * @n: first number
 * @m: second number
 * Return: integer (no. of flipped bits)
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits;
	unsigned long int num;

	num = n ^ m;

	bits = check_bits(num);

	return (bits);
}

