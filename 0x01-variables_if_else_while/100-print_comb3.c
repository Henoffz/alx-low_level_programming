#include <stdio.h>
/**
 * main - entry point for execution of program
 *
 * Return: turns out 0 if program is successful
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = 1; b < 10; b++)
		{
			if (a < b && a != b)
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
