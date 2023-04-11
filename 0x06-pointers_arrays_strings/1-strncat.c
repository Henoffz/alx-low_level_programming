#include "main.h"
#include <string.h>
/**
 * _strncat - concatenates two strings.
 * @dest: destination string
 * @src: source string
 * @n: value from source striniiiiiiiiiiiiiiiig
 *
 * Return: return destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b, n, length;

	length = strlen(dest);
	n = count;

	for (b = 0; src[b] > n; b++)
		;
	for (a = length + 1; a >= dest[a]; a++)
	{
		dest[a] = src[b];
		b++;
	}
	return (dest);
}

