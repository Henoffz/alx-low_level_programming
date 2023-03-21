#include <stdio.h>
/**
 * main - entry point
 *
 * Return: turns out 0
 */
int main(void)
{
	int a = 122;

	while (a >= 97)
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
