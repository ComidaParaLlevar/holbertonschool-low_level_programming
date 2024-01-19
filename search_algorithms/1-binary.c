#include "search_algos.h"
#include <stdlib.h>

/**
 * binary_search - implements binary search
 * @array: array of values
 * @size: size of array
 * @value: value to search
 * Return: index of the value, or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t min = 0, max = size - 1, middle;

	if (array == NULL || size == 0)
		return (-1);
	print_array(array, min, max);
	while (min <= max)
	{
		middle = (min + max) / 2;
	if (array[middle] == value)
		return (middle);
	else if (array[middle] < value)
		min = middle + 1;
	else
		max = middle - 1;
	print_array(array, min, max);
	}
	return (-1);
}

/**
 * print_array - Prints an array of integers.
 * @array: The array to be printed.
 * @min: The left index of the array.
 * @max: The right index of the array.
 */
void print_array(int *array, size_t min, size_t max)
{
	size_t i;

	i = min;
	if (i > max)
		return;
	printf("Searching in array: ");
	while (array && i <= max)
	{
		if (i > min)
			printf(", ");
		printf("%d", array[i]);
		i++;
	}
	printf("\n");
}
