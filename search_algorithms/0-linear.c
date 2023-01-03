#include "search_algos.h"

/**
 * linear_search - searches for a value in an array
 * of integers using the Linear search algorithm
 * @array: array to search the key
 * @size: size of the array with the key
 * @value: key to search for into the array
 *
 * Return: 0 if found key, -1 if key is not found.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	i = 0;
	while (i < size)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}

		i++;
	}

	if (!array || array[i] == "\0")
	{
		return (-1);
	}
}


