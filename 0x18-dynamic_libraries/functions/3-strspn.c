#include "main.h"
/**
 *  _strspn - a functon that gets the length of a prefix substring
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int e = 0;
	int f;

	while (*s)
	{
		for (f = 0; accept[f]; f++)
		{
			if (*s == accept[f])
			{
				e++;
				break;
			}
			else if (accept[f + 1] == '\0')
				return (e);
		}
		s++;
	}
	return (e);
}


