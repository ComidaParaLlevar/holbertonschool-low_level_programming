#include "function_pointers.h"
#include <stddef.h>
/**
 * int_index - searches for an interger
 * @array: list to search
 * @size: size of array
 * @cmp: function to call
 * Return: index of first element for which cmp doesnt return 0,
 * -1 if no element matches or if size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int c = 0;

	if (size > 0 && array != NULL && cmp != NULL)
	{
		while (c < size && array[c] != 0)
		{
			cmp(array[c]);
			return (c);
		}
	}
return (-1);
}
