#include <stdio.h>

/**
 *main - prints numbers from 0 to 9
 *
 *Return: 0
 */

int main(void)
{
	int i;
	char x;

	for (i = 0 ; i <= 9 ; i++)
	{
	putchar('0' + i);
	}
	for (x = 'a' ; x <= 'f' ; x++)
	{
	putchar(x);
	}
	putchar('\n');
	return (0);
}
