#include "main.h"
/**
 * print_alphabet - print alphabets in lowercase
 *
 * Return: 0 if successful
 */

void print_alphabet(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
