#include "main.h"
/**
 *print_triangle- prints square
 *@size: size of triangle
 *Return: void
 */

void print_triangle(int size)
{
	int a, b, c;

	If (size <= 0)
	{
		_putchar('\n');
		return;
	}

	{
		for (a = 0; a <= size; a++)
		{
			for (b = 0; b < size - a; b++)
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
}
