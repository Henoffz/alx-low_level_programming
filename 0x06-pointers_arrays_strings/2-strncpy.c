#include <stdio.h>
/**
 * _strncpy - function that copies a string
 *
 * @dest: destination string
 * @src: source string
 * @n: number of char to becopied
 *
 * Return: merge string comprising the destination and source string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0, b = 0, c;

	while (dest[a] != 0)
	{
		a++;
	}
	while (src[b] != 0)
	{
		b++;
	}
	for (c = 0; c < n && src[c] != '\0'; c++)
	{
		dest[c] = src[c];
	}
	for (; c < n; c++)
		dest[c] = '\0';
	return (dest);
}
