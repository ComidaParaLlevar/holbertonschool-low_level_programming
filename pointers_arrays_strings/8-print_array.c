#include "main.h"
#include <stdio.h>
/**
 *print_array- prints array of numbers
 *@a: array
 *@n: array counter
 */

void print_array(int *a, int n)
{
	int z = 0;

	n = 0;

	while (a[z])
	{
		z++;
	}

	while (n < (z - 1))
	{
		if (n == (z - 2))
		{
			printf("%d", a[n]);
			n++;
		}
		else
		{
			printf("%d, ", a[n]);
			n++;
		}
	}
printf("\n");
}
