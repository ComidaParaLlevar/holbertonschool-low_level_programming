#include "main.h"
/**
 * string_toupper - changes letters of a string to upper case
 * @c: string
 * Return: upper case string
 */

char *string_toupper(char *c)
{
	int i;

	i = 0;
	while (c[i] != '\0')
	{
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] -= ' ';
		i++;
	}
	return (c);
}
