#include "main.h"
/**
 *_strncat- concatenates two strings 
 *@dest: destination of string, contains first string
 *@src: source of second string
 *@n: bytes to use at most
 *Return: dest concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int c = 0;
	int d = 0;

	while (dest[c] < n && dest[c] != '\0')
	{
		c++;
	}

	while (src[d] < n && dest[c] != '\0')
	{
		dest[c] = src[d];
		c++;
		d++;
	}
return (dest);
}
