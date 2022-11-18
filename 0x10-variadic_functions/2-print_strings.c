#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings, followed by a new line
 * @separator: output delimiter
 * @n: number of arguments passed to main
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;
	va_list strings;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(strings, char *);
		if (string != NULL)
			printf("%s", string);
		else
			printf("(nil)");

		if ((i != n - 1) && (separator != NULL))
			printf("%s", separator);
	}
	putchar('\n');
	va_end(strings);
}

