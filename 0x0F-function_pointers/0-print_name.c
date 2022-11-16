#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - accepts a callback function tha prints a name
 * @name: string that is the name to be printed
 * @f: function to a pointer that accepts an array of chars and returns nothing
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
