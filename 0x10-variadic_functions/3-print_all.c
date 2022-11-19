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

/**	str = "Hi";
	_strcpy(str, format); */

	va_start(args, format);
	while (format[j])
	{
		switch (format[j]) {
		case 'c':		/* char */
			/* need a cast here since va_arg only
			   takes fully promoted types */
			c = (char) va_arg(args, int);
			printf("%c", c);
			break;
		case 'i':		/* int */
			i = va_arg(args, int);
			printf("%d", i);
			break;
		case 'f':		/* double */
			f = va_arg(args, double);
			printf("%f", f);
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
		if (format[j])
			printf(", ");
		j++;
	}
	va_end(args);
	putchar('\n');
}

