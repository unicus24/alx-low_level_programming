#include "main.h"

int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - a function that returns the natural square root of a number
 * @n: the number whose square root will be determined
 * return: the value of the resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actualsqrt_recursion - recurses to find the neutral square root of the number
 * @n: number whose square root will be determined
 * @i: iterator
 * return: the result of the square root of the number
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}

	
