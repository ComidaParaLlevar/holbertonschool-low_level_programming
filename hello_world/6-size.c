#include <stdio.h>
#include <string.h>
#include <stdint.h>
/**
 *main - size of various data types.
 *Return:0
 *
 */
int main(void)
{
	char let;
	int num;
	long lg;
	long long llg;
	float dec;

	printf("Size of a char: %lu byte(s)\n", sizeof(let));
	printf("Size of an int: %lu byte(s)\n", sizeof(num));
	printf("Size of a long int: %lu byte(s)\n", sizeof(lg));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(llg));
	printf("Size of a float: %lu byte(s)\n", sizeof(dec));
	return (0);
}
