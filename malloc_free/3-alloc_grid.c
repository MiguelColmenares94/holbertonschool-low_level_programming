#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * alloc_grid - pointer to a 2 dimensional array of integers.
 * @width: width of matrix
 * @height: height of matrix
 *
 * Return: NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **a;
	int b, c;


	if (width <= 0 || height <= 0)
		return (NULL);
	a = malloc(sizeof(*a) * height);
	if (a == 0)
		return (NULL);
	for (b = 0; b < height; b++)
	{
		a[b] = malloc(sizeof(int) * width);
		if (a[b] == 0)
		{
			for (c = 0; c < b; c++)
			{
				free(a[c]);
			}
			free(a);
			return (NULL);
		}
		for (c = 0; c < width; c++)
		{
			a[b][c] = 0;
		}
	}
	return (a);
}

