#include<stdio.h>
/**
 * tortue - prints a string before the main function is executed
 * Return: nothing
 */
void tortue(void) __attribute__ ((constructor));
void tortue(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
