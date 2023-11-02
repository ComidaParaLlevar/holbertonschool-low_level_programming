#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if success, 1 if error
 */

int main(int argc, char *argv[])
{
	int mul, num, num1;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	num1 = atoi(argv[2]);
	mul = num1 * num;

	printf("%d\n", mul);
	return (0);
}

