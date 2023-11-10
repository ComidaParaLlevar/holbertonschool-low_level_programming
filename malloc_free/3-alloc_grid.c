#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * alloc_grid - allocates a 2d array
 * @width: width of grid
 * @height: height of grid
 * Return: int pointer to grid
 */

int **alloc_grid(int width, int height)
{
	int **ar;
	int i = 0, c = 0;

	if (width <= 0)
		return (NULL);

	if (height <= 0)
		return (NULL);

	ar = malloc(height * sizeof(int *));
	if (ar == NULL)
	{
		free(ar);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		ar[i] = malloc(width * sizeof(int));
		if (ar[i] == NULL)
		{
			for (i = 0; i <= height; i++)
			{
				free(ar[i]);
			}
			free(ar);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (c = 0; c < width; c++)
			ar[i][c] = 0;
	}
	return (ar);
}
