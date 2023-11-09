#include <stdlib.h>
#include <stddef.h>
#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: concatenated strings
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int c = 0, i = 0, j = 0, x = 0, sum;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[c] != '\0')
		c++;

	while (s2[i] != '\0')
	{
		i++;
	}

	sum = c + i;
	str = malloc((sum + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	while (j < c)
	{
		str[j] = s1[j];
		j++;
	}
	while (x < i)
	{
		str[j + x] = s2[x];
		x++;
	}
str[j + x] = '\0';
return (str);
}
