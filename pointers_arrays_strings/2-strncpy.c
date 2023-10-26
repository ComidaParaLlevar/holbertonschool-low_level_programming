#include "main.h"
/**
 *_strncpy - copies a string
 *@dest: destination of copy
 *@src: source of copy
 *@n: bytes
 *Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int c = 0;

	while (src[c] && c < n)
	{
		dest[c] = src[c];
		c++;
	}
	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}
return (dest);
}
