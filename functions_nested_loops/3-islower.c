#include "main.h"
/**
 *_islower- checks for lower case characters
 *
 *@c: is the character that need to be checked
 *
 *Return: 1 for true, 0 for false
 */

int _islower(int c)
{

	int i;

for (i = 97 ; i <= 122 ; i++)
{
	if (i == c)
	{
		return (1);
	}
}
return (0);
}
