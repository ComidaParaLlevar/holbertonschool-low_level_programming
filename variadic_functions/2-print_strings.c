#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings
 * @separator: string to separate words
 * @n: number of variables in function
 * @...: variable parameter
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	char *strptr;
	unsigned int i;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		strptr = va_arg(str, char *);

		if (strptr == NULL)
		{
			printf("%s", "(nil)");
		}
		else
			printf("%s", strptr);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(str);
}
