#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Creates a 2D grid of integers
 * @width: number of columns of the array
 * @height: number of rows of the array
 * Return: Pointer to a multi-dimensional 2D array of integers
 */
int **alloc_grid(int width, int height)
{
	int **mesh;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	mesh = (int **)malloc(sizeof(int *) * height);
	if (mesh == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		mesh[i] = (int *)malloc(sizeof(int) * width);
		if (mesh[i] == NULL)
		{
			for (i = 0; i < height; i++)
			{
				free(mesh[i]);
			}
			free(mesh);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			*(*(mesh + i) + j) = 0;
	}
	return (mesh);
}
