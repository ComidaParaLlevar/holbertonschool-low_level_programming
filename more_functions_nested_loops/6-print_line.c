#include "main.h"
/**
 *print_line- prints underscores n times
 *@n: provides number of times
 *Return: void
 */

void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}

