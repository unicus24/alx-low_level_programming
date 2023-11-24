#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int.
 * @b: pointer to a string containing a binary number
 *
 * Return: unsigned int with decimal value of binary number, or 0 if error
 */

unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int numCon;

	numCon = 0;
	if (!b)
		return (0);
	for (j = 0; b[j] != '\0'; j++)
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);
	}
	for (a = 0; b[j] != '\0'; j++)
	{
		numCon <<= 1;
		if (b[j] == '1')
			numCon += 1;
	}
	return (numCon);
}
