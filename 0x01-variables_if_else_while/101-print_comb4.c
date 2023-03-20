#include <stdio.h>
/**
 * main - entry point for our code
 *
 * Return: outputs 0 if program runs successfully
 */

int main(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a < 8; a++)
	{
		for (b = a + 1; b < 9; b++)
		{
			for (c = b + 1; c < 10; c++)
			{
				if (a < b & b < c & b != c)
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(c + '0');

				if (a == 7 & b == 8 & c == 9)
					break;

				putchar(',');
				putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
