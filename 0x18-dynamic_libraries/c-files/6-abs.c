#include "main.h"
/**
 * _abs - function that computes the absolute value of an integer.
 * @i: variable of integer origin
 * Return: absolute value of number entered
 */
int _abs(int i)
{
	if (i < 0)
	{
		i = i * -1;
	}
	return (i);
}
