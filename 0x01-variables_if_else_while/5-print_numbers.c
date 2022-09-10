#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints all single digit numbers of base 10 starting from 0
 * Return: 0 (Success)
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	putchar('\n');
	return (0);
}
