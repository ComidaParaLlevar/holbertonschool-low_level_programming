#include "main.h"
/**
 * print_sign- checks for positive or negative numbers
 *
 * @n: numbers to check
 * Return: 1 if positive, 0 for zero, -1 for negative, 2 if else
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	if (n == 0)
	{
		return (0);
	}
	if (n < 0)
	{
		return (-1);
	}
return (2);
}
