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
	(void)height;
	free(grid);
}
