#include "main.h"
/**
 *_memset - fills memory with constant type
 *@dest:receiving var
 *@src: source var
 *@n: number of bytes
 *Return: updated array
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c = 0;

	while (src[c])
	{
		if (n > c)
		{
			dest[c] = src[c];
			c++;
		}
		else
			c++;
	}
return (dest);
}
