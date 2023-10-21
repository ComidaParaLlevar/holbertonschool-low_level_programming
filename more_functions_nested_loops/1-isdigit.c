#include "main.h"
/**
 *_isdigit- checks for digits from 0 to 9
 *
 *@c: number to check
 *
 *Return: 1 if digit case, 0 if other
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
		return (0);
}
