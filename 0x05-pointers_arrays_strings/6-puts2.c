#include "main.h"
/**
 * puts2 - prints every character of a string starting
 * from the first.
 *
 * @str: value to be checked.
 *
 * Return: always 0.
 */

void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}


