#include <stdio.h>
/**
 * main - prints all arguments
 * @argc: number of string arguments
 * @argv: argument vector
 * Return: void
 */

int main(int argc, char *argv[])
{
	int c = 0;

	while (argv[c])
	{
		printf("%s\n", argv[c]);
		(void)argc;
		c++;
	}
	return (0);
}
