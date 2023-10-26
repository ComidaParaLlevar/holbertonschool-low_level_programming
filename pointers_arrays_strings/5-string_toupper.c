#include "main.h"
/**
 * string_toupper - changes letters of a string to upper case
 * @char: string
 * Return: upper case string
 */

char *string_toupper(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - ' ';
		}
		str++;
	}

return (str);
}
