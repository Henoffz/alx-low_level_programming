#include <stdio.h>
/**
 * main - codes' entry point
 *
 * Return: 0 if successful
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 98; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			if (i < j && i != j)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');
				if (i == 98 && j == 99)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
