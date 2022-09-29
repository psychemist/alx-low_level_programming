#include "main.h"
/**
 * sqrroot - Helper function to test condition, find root and recurse
 * @n: first int
 * @m: second param
 * Return: -1 if !natural sqrt
 */

int sqrroot(int n, int m)
{
	if (m * m > n)
		return (-1);

	if (m * m == n)
		return (m);

	return (sqrroot(n, m + 1));
}

/**
 * _sqrt_recursion - find natural square root of n
 * @n: formal param
 * Return: natural square root or -1 if !natural sqrt
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (sqrroot(n, 0));
}
