#include "main.h"
/**
 *_strlen- returns lenght of a string
 *@s: string pointer
 *Return: lenght of string
 */

int _strlen(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		c++;
		s++;
	}
return (c);
}
