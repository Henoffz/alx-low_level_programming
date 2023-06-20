#include "main.h"

/**
 *_islower - prints interger value of lowercase character.
 *@c: character if integer type
 *Return: integer lower interger
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
