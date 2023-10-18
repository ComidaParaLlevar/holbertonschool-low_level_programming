#include "main.h"
/**
 *print_last_digit - prints last digit of c
 *@c: number to evaluate
 *Return: val if last digit if number is negative, last if positive
 */

int print_last_digit(int c)
{
	int abs;
	int val;
	int last;

	if (c < 0)
	{
		abs = c * (-1);
		val = abs % 10;
		_putchar('0' + val);
		return (val);
	}
	else
	{
		last = c % 10;
		_putchar(last + '0');
		return (last);
	}
}
