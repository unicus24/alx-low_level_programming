#include "main.h"
/**
 * Description: Checks for a lowercase character.
 * @c: the character to be checked.
 * Return: 1 if the character is lowercase, otherwise 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else 
		return (0);
}
