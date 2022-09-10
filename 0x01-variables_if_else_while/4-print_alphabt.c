#include <stdio.h>
/**
 * main - Entry point
 * Description: Print alphabet excluding letter e and letter q
 * Return: 0 (Success)
 */
int main(void)
{
	char aleph = 'a';

	while (aleph <= 'z')
	{
		if (aleph != 'q' && aleph != 'e')
		{
			putchar(aleph);
		}
		aleph++;
	}
	putchar('\n');
	return (0);
}
