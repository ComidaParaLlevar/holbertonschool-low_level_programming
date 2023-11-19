#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * print_all - Prints anything
  * @format: function to use
  *@...: variable parameter
  * Return: Nothing
  */
void print_all(const char * const format, ...)
{
	va_list args;
	f_struct forms[] = {
		{ "c", print_char },
		{ "i", print_integer },
		{ "f", print_float },
		{ "s", print_ptr }
	};
	unsigned int i = 0;
	unsigned int c = 0;
	char *separator = "";

	va_start(args, format);

	while (format != NULL && format[i])
	{
		c = 0;
		while (c < 4)
		{
			if (format[i] == *forms[c].identifier)
			{
				forms[c].f(separator, args);
				separator = ", ";
			}
			c++;
		}
		i++;
	}

	va_end(args);
	printf("\n");
}

/**
  * print_char - prints a char type
  * @separator: separator of string
  * @args: list of variadic arguments
  *
  * Return: void
  */
void print_char(char *separator, va_list args)
{
	printf("%s%c", separator, va_arg(args, int));
}

/**
  * print_integer - print int type
  * @separator: separator of int
  * @args: list of variadic arguments
  *
  * Return: void
  */
void print_integer(char *separator, va_list args)
{
	printf("%s%i", separator, va_arg(args, int));
}

/**
  * print_float - Prints a float type
  * @separator: separator of the character
  * @args: list of variadic arguments
  *
  * Return: void
  */
void print_float(char *separator, va_list args)
{
	printf("%s%f", separator, va_arg(args, double));
}

/**
  * print_ptr - prints pointer of char
  * @separator: separator of the character
  * @args: list of variadic arguments
  *
  * Return: void
  */
void print_ptr(char *separator, va_list args)
{
	char *arg = va_arg(args, char *);

	if (arg == NULL)
	{
		printf("%s%s", separator, "(nil)");
		return;
	}

	printf("%s%s", separator, arg);
}
