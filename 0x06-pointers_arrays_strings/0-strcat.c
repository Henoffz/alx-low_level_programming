#include "main.h"
#include <string.h>
/**
 * _strcat - function that concatenate two strings
 *
 * @dest: destination string
 * @src: source string
 *
 * Return: always 0
 */

char *_strcat(char *dest, char *src)
{
	int a, b, length;

	length = strlen(dest);

	for (b = 0; src[b] != '\0'; b++)
		;
	for (a = length + 1; a >= dest[a]; a++)
	{
		dest[a] = src[b];
		b++;
	}
	return (dest);
}
