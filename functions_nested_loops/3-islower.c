#include "main.h"
/**
 *int _islower() - checks lower case
 *c - int
 *Return: 1 if true, 0 if false
 */

int _islower(int c)
{
for (c = 97 ; c == 122 ; c++)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
}
return (0);
}
