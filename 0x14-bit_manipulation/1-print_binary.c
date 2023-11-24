#include "main.h"

/**
 * _basPow - a function that calculates the (base^power)
 * @base: base of the exponent
 * @power: power of the exponent
 *
 * Return: the value of (base^power)
 */

unsigned long int _basPow(unsigned int base, unsigned int power)
{
	unsigned long int numResult;
	unsigned int j;

	numResult = 1;

	for (j = 1; j <= power; j++)
		numResult *= base;
	return (numResult);
}

/**
 * print_binary - a function that prints the binary representation of a number.
 * @n: number to be printed
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int divisor, check;
	char flag;

	flag = 0;
	divisor = _basPow(2, sizeof(unsigned long int) * 8 - 1);

	while (divisor != 0)
	{
		check = n & divisor;
		if (check == divisor)
		{
			flag = 1;
			_putchar('1');
		}

		else if (flag == 1 || divisor == 1)
		{
			_putchar('0');
		}
		divisor >>= 1;
	}
}

