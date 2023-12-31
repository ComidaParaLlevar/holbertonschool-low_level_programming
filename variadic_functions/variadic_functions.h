#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(char *separator, va_list args);
void print_integer(char *separator, va_list args);
void print_float(char *separator, va_list args);
void print_ptr(char *separator, va_list args);

/**
 * struct forms - Struct format_types
 * @identifier: The conversion specifier
 * @f: The function pointer
 */
typedef struct forms
{
	char *identifier;
	void (*f)(char *separator, va_list args);
} f_struct;

#endif
