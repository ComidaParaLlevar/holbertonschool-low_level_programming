#include "main.h"
/**
 *cap_string - makes first letter of each word uppercase
 *@s: string
 *Return: updated string
 */

char *cap_string(char *s)
{
	int c = 0;
	int n = 1;

	while (s[c])
	{
		if (n == 1 && s[c] >= 'a' && s[c] <= 'z')
		{
			s[c] -= ' ';
			n = 0;
			c++;
		}
		if (s[c] == ',' || s[c] == ';' || s[c] == '.' || s[c] == '!' || s[c] == '?' || s[c] == '"' || s[c] == '(' || s[c] == ')' || s[c] == '{' || s[c] == '}' || s[c] == ' ' || s[c] == '\n' || s[c] == '\t')
		{
			n = 1;
			c++;
		}
		else
		{
			n = 0;
			c++;
		}
	}
return (s);
}
