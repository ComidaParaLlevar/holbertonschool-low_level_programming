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
	unsigned int i, c, x;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		c++;

	ptr = malloc(sizeof(char) * (c + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		ptr[i] = s1[i];

	for (x = 0; s2[x] && x < n; x++)
		ptr[i++] = s2[x];

	ptr[i] = '\0';

return (ptr);
}


