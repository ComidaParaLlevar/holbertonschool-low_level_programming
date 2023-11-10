#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: byte limit of second string
 * Return: concatenated pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, c, l, sum;
	char *ptr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[c])
		c++;

	while (s2[l])
		l++;

	if (l >= n)
		l = n;

	sum = c + l;

	ptr = malloc(sum + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= sum; i++)
	{
		if (i < c)
		{
			ptr[i] = s1[i];
		}
		else 
		{
			if (s2[i - c] != '\0')
			ptr[i] = s2[i - c];
		}
	}

printf("%d\n", sum);
return (ptr);
}


