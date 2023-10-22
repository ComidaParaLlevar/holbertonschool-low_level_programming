#include "main.h"
/**
 *print_numbers- prints numbers 0 to 9
 *Return: void
 *
 */

void print_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		if ((a == 2) (a == 4))
		{
			continue;
		}
		_putchar(a + '0');
	}
	_putchar('\n');
}
