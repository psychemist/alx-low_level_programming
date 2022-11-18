#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: output delimiter
 * @n: number of arguments passed to main
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, num;
	va_list nums;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(nums, int);
		printf("%d", num);

		if ((i != n - 1) && (separator != NULL))
			printf("%s", separator);
	}
	putchar('\n');
	va_end(nums);
}
