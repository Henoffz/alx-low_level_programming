#include "main.h"
/**
 * _isupper - checks for upper and lower case character.
 *
 * @c: value to be checked.
 *
 * Return: 1 if character is uppercase and 0 if otherwise.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
