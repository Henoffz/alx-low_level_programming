#include "main.h"
/**
 * _abs - calculate the absolute value of an integer.
 *
 * @i:enter number as integer.
 *
 * Return: absolute value
 */

int _abs(int i)
{
	if (i > 0)
		i = i;
	else
		i = i * -1;
	return (i);
}
