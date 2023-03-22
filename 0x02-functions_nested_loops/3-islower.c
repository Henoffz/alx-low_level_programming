#include "main.h"
/**
 * _islower - shows 1 if the input is lower case and other cases if
 * 0
 * @c : the character in ACSII code
 *
 * Return: 1 for lower case. 0 for ther cases.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

