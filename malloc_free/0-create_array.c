#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 *@size: size of array
 *@c: specific char
 *
 * Return:pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int b;

	if (size == 0)
	{
		return (NULL);
	}

	a = malloc(size);

	if (a == 0)
	{
		return (NULL);
	}

	for (b = 0; b < size; b++)
	{
		*(a + b) = c;
	}
	return (a);
}
