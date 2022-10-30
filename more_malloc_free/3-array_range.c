#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: min value
 * @max: max value
 *
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int *a;
	int b;

	if (min > max)
		return (NULL);
	a = malloc(sizeof(int) * (max - min + 1));
	if (a == NULL)
		return (NULL);
	for (b = 0; b <= max - min; b++)
		a[b] = min + b;
	return (a);
}
