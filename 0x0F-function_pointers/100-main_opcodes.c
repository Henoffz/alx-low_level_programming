#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the opcodes of its own main function
 *
 * @argc: number of arguments
 * @argv: arrays of values
 *
 * Return: 0 upon success
 */
int main(int argc, char **argv)
{
	int i, n;
	char *ptr;

	if (argc != 2)
	{
		printf("Exit\n");
		exit(1);
	}
	bytess = atoi(argv[1]);
	if n < 0
	{
		printf("Exit\n");
		exit(2);
	}
	ptr = (char *)main;
	i = 0;

	while (i < n)
	{
		if (i == n - 1)
		{
			printf("%02hhx\n", ptr[i]);
			break;
		}
		printf("%02hhx ", ptr[i]);
		i++;
	}
	return (0);
}
