#include "main.h"
/**
 * _isalpha: Checks for alphabetic character.
 * @c: the char to be checked.
 * Return: 1 if c is a letter lowercase or uppercase, otherwise 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));

}
