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
	int c, i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[c])
		c++;

	while (s2[i])
	{
		i++;
		c++;
	}

	str = (char *)malloc(sizeof(char) * c);

	if (str == NULL)
		return (NULL);

	i = 0;
	while (s1[i])
	{
		str[j] = s1[i];
		j++;
		i++;
	}
	i = 0;
	while (s2[i])
	{
		str[j] = s2[i];
		j++;
		i++;
	}
return (str);
}
