#include "main.h"
/**
 * _strcpy - function that copies a pointed string
 *
 * @dest: destination array
 * @src: source array
 *
 * Return: destination containing string
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	if (dest == NULL)
		return (NULL);

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];
	return (dest);
}
