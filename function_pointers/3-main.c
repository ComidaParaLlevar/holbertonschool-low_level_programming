#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - tests the operations of calculator
 * @argc: number of arguments
 * @argv: array of pointers
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int arg1, arg3;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	arg1 = atoi(argv[1]);
	op = argv[2];
	arg3 = atoi(argv[3]);

	if (!op)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && arg3 == 0) ||
		(*op == '%' && arg3 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(arg1, arg3));

	return (0);
}
