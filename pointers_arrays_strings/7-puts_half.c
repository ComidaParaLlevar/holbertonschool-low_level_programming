#include "main.h"
/**
 *puts_half-prints second half of string
 *@str: string
 */

void puts_half(char *str)
{
	int c = 0;
	int e = 0;
	int d;

	while (str[c])
	{
		c++;
	}

	d = ((c - 1) / 2);

	while (str[e])
	{
		if (e > d)
		{
			_putchar(str[e]);
		}
		e++;
	}
}
