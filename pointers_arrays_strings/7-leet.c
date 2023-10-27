#include "main.h"
/**
 * leet - encodes string into 1337
 * @s: string
 * Return: converted string
 */

char *leet(char *s)
{
	int c = 0;
	int i = 0;
	char l[] = "aAeEoOtTlL";
	char n[] = "4433007711";

	while (s[c] != '\0')
	{
		while (l[i])
		{
			if (l[i] == s[c])
			{
				s[c] = n[i];
			}
			i++;
		}
		c++;
		i = 0;
	}
return (s);
}
