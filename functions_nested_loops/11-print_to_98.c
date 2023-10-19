#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - adds or substracts n until 98
 *@n: number to check
 *Return: void
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n ; i <= 98 ; i++)
		{
			if (i == 98)
			{
				printf("%d\n", i);
			}
			else
			{
			printf("%d, ", i);
			}
		}
	}
	if (n > 98)
	{
		for (i = n ; i <= 98 ; i--)
		{
			if (i == 98)
			{
				printf("%d\n", i);
			}
			else
			{
			printf("%d, ", i);
			}
		}
	}
	if (n == 98)
	{
		printf("%d\n", n);
	}
}
