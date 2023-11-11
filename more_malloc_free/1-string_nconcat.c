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
	unsigned int i, c, l, x;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[c] != '\0')
		c++;

	while (s2[l] != '\0')
		l++;

	if (n >= l)
		n = l;

	ptr = malloc(sizeof(char) * (c + n + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < c; i++)
		ptr[i] = s1[i];

	for (x = 0; x < n; x++, i++)
		ptr[i] = s2[x];

	ptr[i] = '\0';

return (ptr);
}


