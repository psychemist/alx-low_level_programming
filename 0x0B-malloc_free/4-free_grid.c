#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Frees the 2D array of given height
 * @grid: 2D array of integers from previous task function
 * @height: Number of rows of the array
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
		free(grid);
	for (; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
