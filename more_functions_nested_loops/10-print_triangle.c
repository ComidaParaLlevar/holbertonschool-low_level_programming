#include "main.h"
/**
 *print_triangle- prints square
 *@size: size of triangle
 *Return: void
 */

void print_triangle(int size)
{
	int a, b, c;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
					_putchar(32);
			}
			for (c = 0; c < a; c++)
			{
				_putchar(35);
			}
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
