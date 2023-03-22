#include "main.h"
/**
 * print_last_digit - computes the last digit of
 * a number.
 *
 * @a: enters number as integer.
 *
 * Return: last digit
 */

int print_last_digit(int a)
{
	int b;

	b = a % 10;
	if (a < 0)
		b = b * -1;
	else
		b = b;
	return (b);
}

