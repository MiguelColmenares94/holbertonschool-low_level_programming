#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * free_grid -  frees a 2 dimensional grid
 * @grid: 2d array
 * @height: height of matrix
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int a;

	if (grid != NULL && height != 0)
	{
		a = 0;
		while (a < height)
		{
			free(grid[a]);
			a++;
		}
		free(grid);
	}
}
