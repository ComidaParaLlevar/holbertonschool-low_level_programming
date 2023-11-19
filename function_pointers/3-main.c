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
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	arg1 = atoi(argv[1]);
	op = get_op_func(argv[2]);
	arg3 = atoi(argv[3]);

	if (!op)
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && arg3 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", op(arg1, arg3));

	return (0);
}
