#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_char - prints a character to standard output
 * @va_list: stdarg data object that holds a list of variable arguments
 */
void print_char(va_list list)
{
	printf("%c", (char) va_arg(list, int));
}

/**
 * print_float - prints a decimal number to standard output
 * @va_list: stdarg data object that holds a list of variable arguments
 */
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * print_int - prints an integral number to standard output
 * @va_list: stdarg data object that holds a list of variable arguments
 */
void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * print_string - prints a string to stanard output
 * @va_list: stdarg data object that holds a list of variable arguments
 */
void print_string(va_list list)
{
	char *s;
	s = va_arg(list, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - prints anything
 * @format: type identifier of arguments passed to function
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i, j;
	char *separator = "";

	data_type data[] = {
		{'c', print_char},
		{'f', print_float},
		{'i', print_int},
		{'s', print_string},
		{'\0', NULL}
	};

	va_start(args, format);

	i = 0;
	while (format[i] != '\0')
	{

		j = 0;
		while (data[j].letter)
		{
			if (format[i] == data[j].letter)
			{
				printf("%s", separator);
				data[j].func(args);
			}
			j++;
		}
		separator = ", ";
		i++;
	}
	va_end(args);
	putchar('\n');
}

