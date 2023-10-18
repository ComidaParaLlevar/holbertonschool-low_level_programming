#include "main.h"
/**
 *_islower- checks for upper case characters
 *
 *@c: is the character that need to be checked
 *
 *Return: 1 for true, 0 for false
 */

int _isalpha(int c)
{

	int i;

for (i = 65 ; i <= 90 ; i++)
{
	if (i == c)
	{
		return (1);
	}
}
return (0);
}
