#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns sum of parameters
 * @n: number of parameters
 * @...: variable for parameter
 * Return: sum of parameters, 0 if no parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	unsigned int i, sum;

	va_start(num, n);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(num, int);
	}

va_end(num);
return (sum);
}

