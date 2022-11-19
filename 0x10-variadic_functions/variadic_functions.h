#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
/**
 * struct type - a struct containing a format identifier and a print function
 * @letter: a char that corresponds to a specified printf format identifier
 * @func: a function pointer that accepts a va_list object param & returns void
 */
typedef struct type
{
	char letter;
	void (*func)(va_list);
} data_type;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTIONS_H */
