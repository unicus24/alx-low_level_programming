#include "main.h"

/**
 * flip_bits -  a function that returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, bitCount = 0;
	unsigned long int currentNum;
	unsigned long int exclusiveNum = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		currentNum = exclusiveNum >> j;
		if (currentNum & 1)
			bitCount++;
	}

	return (bitCount);
}

