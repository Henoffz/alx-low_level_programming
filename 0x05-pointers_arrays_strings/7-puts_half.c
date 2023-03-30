#include "main.h"
/**
 * puts_half: prints half of a string.
 *
 * @str: value to be checked.
 *
 * Return: always 0
 */

void puts_half(char *str)
{
	int a;
	int length = 0;

	for (a = 0; str[a] != '\0'; a++)
		length++;

	if (length % 2 == 0)
	{
		for (a = length / 2; str[a] != '\0'; a++)
			_putchar(str[a]);
		_putchar('\n');
	}
	else
	{
		for (a = length - 1 / 2; str[a] != '\0'; a++)
			_putchar(str[a]);
		_putchar('\n');
	}
}
