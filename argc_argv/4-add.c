#include <stdio.h>
#include <stdlib.h>
/**
 * main - add positive numbers
 * @argc: number of arguments
 * @argv: argument array
 * Return: 0 if succes, 1 if error
 */

int main(int argc, char *argv[])
{
	int i;
	int sum;

	if (argc < 2)
	{
		printf("0\n");
	}

	for (i = 0; i < argc; i++)
	{
		int c;
		for (c = 0; argv[i][c] != '\0'; c++)
		{
			if (argv[i][c] < 'a' || argv[i][c] > 'z')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (1);
}
