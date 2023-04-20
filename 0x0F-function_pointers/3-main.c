#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - computes the result of an operation
 * @argc: number of arguments
 * @argv: value of arguments
 *
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
	int (*function)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	function = get_op_func(argv[2]);

	if (!function)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", function(atoi(argv[1]), atoi(argv[3])));
	return (0);
}

