#include "main.h"
/**
 * _strcpy- copies string from a pointer to another pointer
 * @dest: destination of copy
 * @src: source of copy
 * return: value of dest pointer
 */

char *_strcpy(char *dest, char *src)
{
	while (*src)
	{
	*dest = *src;
	dest++;
	src++;
	}
return (dest);
}
