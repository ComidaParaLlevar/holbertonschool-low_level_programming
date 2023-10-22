#include "main.h"
/**
 *print_triangle- prints square
 *@size: size of triangle
 *Return: void
 */

void print_triangle(int size)
{
	int a, b;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = size; b < 1; b--)
			{
				if (a >= b)
				{
					_putchar(35);
				}
				else
				{
					_putchar(' ');
				}
			}
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
