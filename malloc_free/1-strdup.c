#include <stddef.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * _strdup - returns pointer to copy of string in parameter
 * @str: string to duplicate
 * Return: dup string location
 */

char *_strdup(char *str)
{
	int i = 0, c = 0;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[c])
	{
		c++;
	}

	ptr = (char *)malloc((c + 1) * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= c; i++)
	{
		ptr[i] = str[i];
	}

return (ptr);
}

