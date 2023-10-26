#include "main.h"
/**
 *_strcmp - compare two strings
 *@s1: string to compare
 *@s2: string to compare
 *Return: int ascii diff
 */

int _strcmp(char *s1, char *s2)
{
	int c = 0;
	int r;

	if (s1[c] == s2[c])
	{
		c++;
	}
	else
	{
		r = s1[c] - s2[c];
		return (r);
	}
return (0);
}
