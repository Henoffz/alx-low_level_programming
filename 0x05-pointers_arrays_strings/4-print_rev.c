#include "main.h"
/**
 * print_rev - prints a spring in reverse.
 *
 * @s: value to be reversed.
 *
 * Return: reverse string.
 */

void print_rev(char *s)
{
	int i, k;

	k = 0;

	while (s[k] != '\0')
		k++;

	for (i = k - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
