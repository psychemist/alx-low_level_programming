#include "main.h"
/**
 * primeno - Helper function to check condition for isprime
 * @n: input number
 * @i: counter
 * Return: 1 if true, 0 if false
 */
int primeno(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (primeno(n, i - 1));
}

/**
 * is_prime_number - Return 1 if prime number else return 0
 * @n: input
 *
 * Return: 1 if true, 0 if false
 */
int is_prime_number(int n)
{
	if (n < 3)
		return (0);
	return (primeno(n, n - 1));
}
