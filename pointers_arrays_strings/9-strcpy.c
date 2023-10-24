#include "main.h"
/**
 * _strcpy - copies string from a pointer to another pointer
 * @dest: destination of copy
 * @src: source of copy
 * Return: copied string in pointer dest
 */

char *_strcpy(char *dest, char *src)
{
	int c = 0;

	while (*src != '\0')
	{
	dest[c] = src[c];
	c++;
	}
	*dest = '\0';
return (dest);
}
