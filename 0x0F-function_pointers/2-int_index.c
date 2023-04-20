#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - function that searches an integer
 * @array: value name
 * @size: number of iterations
 * @cmp: pointer that points to a function used to compare values
 *
 * Return: Value
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
		{
			return (a);
		}
	}
	return (-1);
}
