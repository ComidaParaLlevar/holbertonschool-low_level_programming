#include "main.h"
/**
 *swap_int- swaps values of variables through pointers
 *@a: integer to be swapped
 *@b: second integer to be swapped
 */

void swap_int(int *a, int *b)
{
	*a = b;
	*b = a;
}
