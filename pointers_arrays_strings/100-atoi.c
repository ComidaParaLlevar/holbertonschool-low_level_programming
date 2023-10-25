#include "main.h"
/**
 * _atoi- converts strings to integers
 * @s: string to convert
 * Return: integers form string
 */

int _atoi(char *s)
{
	int c = 0;
	unsigned int num = 0;
	unsigned int pos = 1;

	while ((s[c] < '0' || s[c] > '9') && (s[c] != '\0'))
	{
		if (s[c] == '-')
		{
			pos *= -1;
			c++;
		}
		else
		{
			c++;
		}
	}

	while (s[c])
	{
		if (s[c] >= '0' && s[c] <= '9')
		{
			while (s[c] >= '0' && s[c] <= '9')
			{
			num = (num * 10) + (s[c] - '0');
			c++;
			}
		}
		else if (num > 0)
		{
			break;
		}
		else
		{
			c++;
		}
	}

return (num * pos);
}

