#include "3-calc.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * get_op_func - gets function that select selects operator function
 * @s: operator arg
 * Return: pointer to appropiate function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
			{"+", op_add},
			{"-", op_sub},
			{"*", op_mul},
			{"/", op_div},
			{"%", op_mod},
			{NULL, NULL}
		};
		int i = 0;

		if (ops[i].op != NULL)
		{
			while (*(ops[i].op) != *s)
			{
				i++;
			}
		}

			return (ops[i].f);
}

