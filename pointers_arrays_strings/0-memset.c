#include "main.h"
/**
 *_memset - fills memory with constant type
 *@s:receiving var
 *@b: source var
 *@n: number of bytes
 *Return: updated array
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c = 0;

	while (n > c)
	{
		s[c] = b;
		c++;
	}
return (s);
}
