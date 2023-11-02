#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc - number of arguments
 * @argv: array of arguments
 * Return: 0 if success, 1 if error
 */

int main(int argc, char *argv[])
{

	int num = atoi(argv[1]);
	int num1 = atoi(argv[2]);
	int mul = num1 * num;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	(void)argc;
	printf("%d\n", mul);
	return (0);
}

