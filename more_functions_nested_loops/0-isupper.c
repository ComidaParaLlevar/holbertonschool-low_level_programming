#include "main.h"
/**
 *_isupper- checks for upper case characters
 *
 *@c: letter to check
 *
 *Return: 1 if upper case, 0 if lower case
 */

int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
		return (0);
}
