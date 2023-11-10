#include "main.h"
#include <stdlib.h>
/**
 * free_grid - unallocates memory of grid
 * @grid: pointer to pointer of grid
 * @height: rows of grid
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
