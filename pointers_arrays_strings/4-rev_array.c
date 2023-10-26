#include "main.h"
/**
*reverse_array - reverses string
*@a: Array of integers
*@n: Number of elements 
*Return: 0
*/
void reverse_array(int *a, int n)
{
    int tmp;
    int st;

	for (st = n - 1; st >= n / 2; st--)
	{
		tmp = a[n - 1 - st];
		a[n - 1 - st] = a[st];
		a[st] = tmp;
	}
}
