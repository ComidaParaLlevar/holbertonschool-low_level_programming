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

	ptr = (char *)malloc(sizeof(char) * (c + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	while (i <= c)
	{
		ptr[i] = str[i];
		i++;
	}
ptr[c] = '\0';
return (ptr);
}

