#include "main.h"

/**
 *factorial- Finds factorial of a number.
 *@n: main int input
 *Return: factorial
 */
int factorial(int n)

{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
return (n * factorial(n - 1));
}
