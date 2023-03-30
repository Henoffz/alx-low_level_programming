#include "main.h"
/**
 * rev_string - reverses a string.
 *
 * @s: value to be reversed.
 *
 * Return: 0 if program is successfully executed.
 */

void rev_string(char *s)
{
	char tmp;
	int i;
	int length;

	length = 0;
	while (s[i] != '\0')
	{
		length++;
		i++;
	}
	for (i = length - 1; i >= 0; i--)
	{
		tmp = s[i];
		s[i] = s[length - 1];
		s[i--] = tmp;
	}
	
}
