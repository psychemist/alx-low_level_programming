#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - variadic function that
 * @n: number of integers passed to function
 * Return: sum of integers
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list nums;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(nums, int);
	}

	va_end(nums);
	return (sum);
}
