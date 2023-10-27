#include "main.h"
/**
 * strchr - locates character in string
 * @s: string to check
 * @c: char c
 * Return: pointer to char, or null
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
		{
			while (s[i])
			{
				s++;
			}
			s--;
			return (s);
		}
		else
		{
			i++;
		}
	}
return (0);
}
