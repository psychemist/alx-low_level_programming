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
	int i, j, x;

	if (width <= 0 || height <= 0)
		return (NULL);
	mesh = (int **)malloc(sizeof(int *) * height);
	for (x = 0; x < height; x++)
		mesh[x] = (int *)malloc(sizeof(int) * width);
	if (mesh == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		j = 0;
		while (j < width)
		{
			*(*(mesh + i) + j) = 0;
			j++;
		}
	}
	return (mesh);
}
