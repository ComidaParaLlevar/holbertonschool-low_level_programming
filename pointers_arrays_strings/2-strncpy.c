#include "main.h"
/**
 *_strncpy - copies a string
 *@dest: destination of copy
 *@src: source of copy
 *@n: bytes
 */

char *_strncpy(char *dest, char *src, int n)
{
	int c = 0;

	while (src[c] && n > '0')
	{
		dest[c] = src[c];
		c++;
		n--;
	}
return (src);
}
