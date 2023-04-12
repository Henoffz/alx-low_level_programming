#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @p: value to be computed
 *
 * Return: Char
 */
char *string_toupper(char *p)
{
	int a = 0;

	while (p[a] != '\0')
	{
		if (p[a] >= 97 && p[a] <= 122)
			p[a] = p[a] - 32;
		a++;
	}
	return (p);
}
