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

	while (z < n)
	{
		printf("%d", a[z]);
		if (z != (n - 1))
		{
			printf(", ");
		}
		z++;
	}
printf("\n");
}
