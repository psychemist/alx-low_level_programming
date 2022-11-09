#include "main.h"
#include <stdlib.h>
/**
 * argstostr - Concatenates all the arguments of the program
 * @ac: argc of main program
 * @av: argv of main program
 * Return: Pointer to new string
 */
char *argstostr(int ac, char **av)
{
	int i, j;
	int x = 0, len = 0;
	char *args;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 1; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			len++;
			j++;
		}
	}
	len++;
	args = malloc(len + (ac - 1));
	if (args == NULL)
		return (NULL);
	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			args[x] = av[i][j];
			x++;
		}
		args[x] = '\n';
	}
	args[len] = '\0';
	return (args);
}
