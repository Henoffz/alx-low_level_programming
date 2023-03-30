#include "main.h"
#include <stdio.h>
/**
 * print_array - prints element of an array
 *
 * @a: name of arrays
 * @n: number of element
 *
 * Return: 0 if program run successfully.
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (x != n - 1)
			printf("%d, ", a[x]);
		else
			printf("%d", a[x]);
	}
	printf("\n");
}
