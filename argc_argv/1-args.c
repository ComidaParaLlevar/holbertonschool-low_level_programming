#include <stdio.h>
/**
 * main - prints number of arguments
 * @argc: number of arguments passed
 * @argv: array of arguments
 * Return: 0 if succesful
 */

int main(int argc, char *argv[])
{
	int d = argc - 1;

	printf("%d\n", d);
	(void)argv;
	return (0);
}
