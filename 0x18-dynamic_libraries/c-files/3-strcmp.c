#include "main.h"

/**
 * _strcmp - cpmpares two strings.
 * @s1: First string for comparison
 * @s2: Second string for comparison
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int a, difference;

	a = 0;
	while (s1[a] != '\0')
	{
		if (s1[a] == s2[a])
		{
			difference = s1[a] - s2[a];
			a++;
		}
		else
		{
			difference = s1[a] - s2[a];
			break;
		}
	}

	return (difference);
}
