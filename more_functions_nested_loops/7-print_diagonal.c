#include "main.h"
/**
 *print_diagonal- prints diagonal line
 *@n: number of lines
 *Return: void
 */

void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for ( b = 0; b < a; b++)
			{
				_putchar(32);
			}
		_putchar('\\');
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n')
	}
}
