#include<stdio.h>
/**
 * tortue - prints a string before the main function is executed
 * Note: made possible by prior declaration of "__attribute__ ((constructor))"
 * Return: nothing
 */
void __attribute__ ((constructor)) tortue(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
