#include "main.h"

/**
 * prime_rec - Helper function to check if a number is prime.
 * @n: The number to check.
 * @i: The current divisor to check.
 *
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int prime_rec(int n, int i)
{
	if (n <= 1)
		return (0);
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (prime_rec(n, i + 1));
}

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to check.
 *
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
	return (prime_rec(n, 2));
}
