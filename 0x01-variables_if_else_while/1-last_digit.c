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
int main(void)
{
        int n, x;
        char str1[] = "Last digit of";
        char str2[] = "greater than 5";
        char str3[] = "less than 6 and not 0";

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        x = n % 10;

        if (x > 5)
                printf("%s %i is %d and is %s\n", str1, n, x, str2);
        else if (x < 5)
                printf("%s %i is %d and is %s\n", str1, n, x, str3);
        else
                printf("%s %i is %d and is 0\n", str1, n, x);
        return (0);
}
