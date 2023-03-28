#include "main.h"
/**
 * puts -  prints a string, followed by a new line,
 * to stdout.
 *
 * @str: the actual string.
 *
 * Return: length 0f string.
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
