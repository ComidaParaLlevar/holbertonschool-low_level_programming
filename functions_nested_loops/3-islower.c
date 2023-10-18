#include "main.h"
/**
 *int _islower() - checks lower case
 *c - int
 *Return: 1 if true, 0 if false
 */

int _islower(int c)
{

	int i;

for (i = 97 ; i <=122 ; i++)
{
	if (i == c)
	{
		return (1);
	}
}
return (0);
}
