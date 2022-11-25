#include "main.h"
/**
 * count_bits - counts the number of bits needed to flip a binary number
 * @o: u_int number
 * Return: integer (no. of flipped bits)
 */
int count_bits(unsigned long int o)
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
 * flip_bits - calculates number of bits to flip from one number to another
 * @n: first number
 * @m: second number
 * Return: integer (no. of flipped bits)
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits;
	unsigned long int num;

	num = n ^ m;

	bits = count_bits(num);

	return (bits);
}

