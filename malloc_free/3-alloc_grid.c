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

	ar = (int **)malloc(sizeof(int *) * height);
	if (ar == NULL)
	{
		free(ar);
		return (NULL);
	}

	while (i < height)
	{
		ar[i] = (int *)malloc(sizeof(int) * width);

		if (ar[i] == NULL)
		{
			while (c < i)
			{
				free(ar[c]);
				c++;
			}
			free(ar);
			return (NULL);
		}
		while (c < width)
		{
			ar[i][c] = 0;
			c++;
		}
		i++;
	}
	return (ar);
}
