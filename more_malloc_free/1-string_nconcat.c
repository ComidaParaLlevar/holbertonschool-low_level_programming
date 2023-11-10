#include "main.h"
#include <stdlib.h>
#include <stddef.h>
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

	while (s1[c] != '\0')
		c++;

	while (s2[l] != '\0')
		l++;

	if (n > l)
		n = l;

	sum = c + n;

	ptr = malloc(sum + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}

	l = 0;
	for (i = 0; i <= sum; i++)
	{
		if (i < c)
		{
			ptr[i] = s1[i];
		}
		else
			ptr[i] = s2[i - c];
	}

ptr[sum] = '\0';
return (ptr);
}


