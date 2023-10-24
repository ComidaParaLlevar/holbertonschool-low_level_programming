#include "main.h"
/**
 *
 *
 */
void puts2(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		if (c % 10 != 0)
		{
			c++;
		}
	_putchar(str[c]);
	c++;
	}
_putchar('\n');
}

