#include "main.h"
/**
 *_strcat- concatenates two strings
 *@dest: destination of string, contains first string
 *@src: source of second string
 *return: concatenated strings char type
 */

char *_strcat(char *dest, char *src)
{
	int c = 0;
	int d = 0;

	while (dest[c] != '\0')
	{
		c++;
	}
	
	dest[c] = ' ';

	while (src[d])
	{
		dest[c] = src[d];
		c++;
		d++;
	}
return (dest);
}
