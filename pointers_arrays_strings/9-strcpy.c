#include "main.h"
/**
 * _strcpy - copies string from a pointer to another pointer
 * @dest: destination of copy
 * @src: source of copy
 * Return: copied string in pointer dest
 */

char *_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
	*dest = *src;
	dest++;
	src++;
	}
	*dest = '\0';
return (dest);
}
