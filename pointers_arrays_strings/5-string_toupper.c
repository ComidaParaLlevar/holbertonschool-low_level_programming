#include "main.h"
/**
 * string_toupper - changes letters of a string to upper case
 * @ptr: string
 * Return: upper case string
 */

char *string_toupper(char *ptr)
{
	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - ' ';
		}
		ptr++;
	}

return (ptr);
}
