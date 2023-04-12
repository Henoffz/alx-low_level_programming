#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: int 1
 * @height: int 2
 *
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int **final_height;
	int i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	final_height = malloc(height * sizeof(int *));
	if (final_height == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		final_height[i] = malloc(width * sizeof(int));
		if (final_height[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(final_height[i]);
			}
			free(final_height);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			final_height[i][j] = 0;
		}
	}
	return (final_height);
}

