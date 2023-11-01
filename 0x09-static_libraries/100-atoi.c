#include "main.h"
/**
 * _atoi - a function that converts a string into an integer
 * @s: this is the string to be converted
 * Return: integer
 */
int _atoi(char *s)
{
	int sign = 1, a = 0;
	unsigned int result = 0;

	while (!(s[a] <= '9' && s[a] >= '0') && s[a] != '\0')

	{
		if (s[a] == '-')

			sign *= -1;

		a++;

	}

	while (s[a] <= '9' && (s[a] >= '0' && s[a] != '\0'))

	{
		result = (result * 10) + (s[a] - '0');

		a++;

	}

	result *= sign;

	return (result);

}

