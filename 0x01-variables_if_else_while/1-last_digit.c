#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	int lastDigit;
	char str[14] = "Last digit of";
	char statement1[] = "and is greater than 5";
	char statement2[] = "and is less than 6 and not 0";
	char statement3[] = "and is 0";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	if (lastDigit > 5)
	{
		printf("%s %d is %d %s\n", str, n, lastDigit, statement1);
	}
	else if (lastDigit == 0)
	{
		printf("%s %d is %d %s\n", str, n, lastDigit, statement3);
	}
	else
	{
		printf("%s %d is %d %s\n", str, n, lastDigit, statement2);
	}
	return (0);
}
