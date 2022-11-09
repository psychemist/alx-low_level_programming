#include "main.h"
#include <stdlib.h>
/**
 * _strlen - Calculates the length of a string
 * @s: Pointer to a char
 * Return: Integer value that is the ength of passed string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len])
	{
		len++;
	}
	return (len);
}

/**
 * argstostr - Concatenates all the arguments of the program
 * @ac: argc of main program
 * @av: argv of main program
 * Return: Pointer to new string
 */

char *argstostr(int ac, char **av)
{
	int i, j;
	int k = 0, len = 0;
	char *args;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* find length of malloc */
	for (i = 1; i < ac; i++)
		len += _strlen(av[i]);

	/* add space for new lines and null terminator */
	len += (ac + 1);
	args = malloc(len * sizeof(*args));
	if (args == NULL)
		return (NULL);

	/* assign each argument into new array */
	for (i = 1; i < ac; i++)
	{
		for (j = 0; j < _strlen(av[i]); j++)
		{
			args[k] = av[i][j];
			k++;
		}
		args[k++] = '\n';
	}
	return (args);
}
