#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints anything
 * @format: type identifier of arguments passed to function
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i, j = 0;
	char c, *s;
	float f;

	va_start(args, format);
	while (format[j])
	{
		switch (format[j])
		{
		case 'c':		/* char */
			c = (char) va_arg(args, int);
			printf("%c", c);
			break;
		case 'f':		/* double */
			f = va_arg(args, double);
			printf("%f", f);
			break;
		case 'i':		/* int */
			i = va_arg(args, int);
			printf("%d", i);
			break;
		case 's':		/* string */
			s = va_arg(args, char *);
			if (s == NULL) 
				printf("(nil)");
			else
				printf("%s", s);
			break;
		default:
			break;
		}
		if (*(format + j + 1) != '\0')
			printf(", ");
		j++;
	}
	va_end(args);
	putchar('\n');
}

