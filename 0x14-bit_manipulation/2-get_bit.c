#include"main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: bits value
 * @index: index to check for bits value
 *
 * Return: -1 if an error pccurs. Otherwise bit value.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int adj = 1;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	adj = adj << index;

	if ((n & adj) == 0)
	{
		return (0);
	}
	return (1);
}
