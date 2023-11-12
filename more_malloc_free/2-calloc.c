#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * _calloc - function that allocates memory for an array using malloc
 * @nmemb: array to allocate
 * @size: size of array
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (size * nmemb); i++)
		ptr[i] = '\0';

	return (ptr);
}

