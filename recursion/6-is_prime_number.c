#include "main.h"
/**
 * is_prime_number - Checks if number  is a prime number.
 * @n: The number to be checked.
 * Return: 1 if prime number, else 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
return (is_prime_recursive(n, 2));
}

/**
 * is_prime_recursive - Checks if 'n' is prime.
 * @n: Number to check
 * @two: The current divisor to test.
 *Return: 1 if prime number, else 0
 */
int is_prime_recursive(int n, int two)
{
	if (two * two > n)
	{
		return (1);
	}
	if (n % two == 0)
	{
		return (0);
	}
	return (is_prime_recursive(n, two + 1));
}

