#include "main.h"
/**
 *print_last_digit - prints last digit of c
 *@c: number to evaluate
 *Return: val if last digit if number is negative, last if positive
 */

int print_last_digit(int c)
{
	c = c % 10;

	if (c < 0)
	{
		c = c * (-1);
		_putchar('0' + c);
		return (c);
	}
	else
	{
		_putchar(c + '0');
		return (c);
	}
}
