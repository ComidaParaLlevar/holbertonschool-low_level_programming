#include "main.h"
/**
 *_isalpha- checks for upper case characters
 *
 *@c: is the character that need to be checked
 *
 *Return: 1 for true, 0 for false
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
return (0);
}
