#include "main.h"
/**
 * _strchr - locates character in string
 * @s: string to check
 * @c: char c
 * Return: pointer to char, or null
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	int d = 0;
	char t = '\0';

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			while (d < i)
			{
				s++;
				d++;
			}
			return (s);
		}
		else
		{
			i++;
		}
	}
return (t);
}
