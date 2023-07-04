#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: Get a random number, check its last digit and compare with 5
 * Return: 0 (Success)
 */
int main(void)
{
	int n, digit;
	char str1[] = "Last digit of";
	char str2[] = "greater than 5";
	char str3[] = "less than 6 and not 0";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;

	if (digit == 0)
		printf("%s %i is %d and is 0\n", str1, n, digit);
	else if (digit > 5)
		printf("%s %i is %d and is %s\n", str1, n, digit, str2);
	else if (digit < 5)
		printf("%s %i is %d and is %s\n", str1, n, digit, str3);
	return (0);
}
