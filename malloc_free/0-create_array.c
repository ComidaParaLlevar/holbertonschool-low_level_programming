#include <stdlib.h>
#include <stddef.h>
/**
 * create_array - creates an array of chars, and initializes it.
 *@size: sets size of array
 *@c: initializes array
 *Return: char array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar = (char *)malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}

	if (ar == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
return (ar);
}
