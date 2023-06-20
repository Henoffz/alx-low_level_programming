#include "main.h"
/**
 * _strlen - checks the length of a string.
 *
 * @s: string to be checked.
 *
 * Return: returns the length of the string.
 */

int _strlen(char *s)
{
	int i = 0;

	for (; *s++;)
		i++;
	return (i);
}
