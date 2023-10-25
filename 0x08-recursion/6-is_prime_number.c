#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - function that returns 1 if the input
 * integer is a prime number
 * @n: number to evaluate
 * return: 1 if n is a prime number and 0 if it's not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n-1));
}

/**
 * actual_prime - calculates if the number is prime recursively
 * @n: this is the number to evaluate
 * @i: iterator
 * return: 1 if n is prime and 0 if it's not
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
