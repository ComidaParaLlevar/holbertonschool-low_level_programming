#include "main.h"
/**
 *_abs- finds the absolute number of a numer
 *@c: number to evaluate
 *Return: val absolute if negative, c if number is positive
 */

int _abs(int c)
{
	int val;

	if (c < 0)
	{
		val = c * (-1);
		return (val);
	}
return (c);
}
