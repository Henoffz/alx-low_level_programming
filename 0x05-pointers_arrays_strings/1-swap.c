#include "main.h"
/**
 * swap_int - swaps the value of two integers.
 *
 * @a: value to be swapped.
 * @b: value to be swapped.
 *
 * Return: returns 0 if successful.
 *
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *b;
	*b = *a;
	*a = swap;
}
