#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - iterates the execution of a function in  array
 * @array: contains elements for function
 * @size: size of array
 * @action: function to call
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int c = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (c < size)
		{
			action(array[c]);
			c++;
		}
	}
return;
}
