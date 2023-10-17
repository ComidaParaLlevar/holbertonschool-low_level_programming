#include "stdio.h"
/**
 *main - prints string using putchar
 *
 *Return: 0
 */

int main(void)
{
	char a[] = "_putchar";
	int b;

	for (b = 0 ; b <= 8 ; b++)
		putchar (a[b]);

	putchar ('\n');
	return (0);
}
