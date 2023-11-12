#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * array_range - creates an array of intergers from min to max
 * @min: first position of array
 * @max: last position of array
 * Return: pointer to created array, NULL if min > max
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i, total;

	if (min > max)
		return (NULL);

	total = max - min + 1;

	ptr = malloc(4 * total);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < total; i++)
		ptr[i] = min++;

	return (ptr);
}
