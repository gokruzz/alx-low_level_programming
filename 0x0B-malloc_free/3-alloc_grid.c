#include "main.h"
#include <stdlib.h>
/**
  * alloc_grid - creates a 2 dimensional array of integers.
  * @width: integer(width of the grid)
  * @height: integer(height of the grid)
  * Return: NULL or pointer to 2D array of integers.
  */
int **alloc_grid(int width, int height)
{
	int **grid;
	int row;
	int column;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (row = 0; row < height; row++)
	{
		grid[row] = malloc(sizeof(int) * width);
		if (grid[row] == NULL)
		{
			for (column = 0; column < row; column++)
			{
				free(grid[column]);
			}
			free(grid);
			return (NULL);
		}
		for (column = 0; column < width; column++)
		{
			grid[row][column] = 0;
		}
	}
	return (grid);
}
