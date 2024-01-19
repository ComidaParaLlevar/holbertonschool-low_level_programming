#include "search_algos.h"

/**
 * linear_search - search an array
 * @value : Initial value given
 * @size : size of the array
 * @array : array to be searched
 *
 * Return: 1 or index
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array || size == 0)
		return (-1);
	for (; i <= size - 1; i++)
	{
		printf("Value checked array[%d] = [%i]\n", (int) i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
