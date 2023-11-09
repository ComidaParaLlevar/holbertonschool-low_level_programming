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

	while (str[i] != '\0')
	{
		i++;
	}

	ptr = (char *)malloc((i + 1) * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}

	while (c <= i)
	{
		ptr[c] = str[c];
		c++;
	}
ptr[i] = '\0';
return (ptr);
}

