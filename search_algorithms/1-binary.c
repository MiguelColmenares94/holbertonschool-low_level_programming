#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array
 *  of integers using the Binary search algorithm
 *  @array: sorted in ascending order array to search the key
 *  @size: size of the sorted array
 *  @value: key to search for in the sorted array
 *
 *  Return: mid if key is found, -1 if key is not found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t mid, low, high, i;

	if (!array)
	{
		return (-1);
	}

	high = size;
	low = 0;
	while (low != high)
	{
		printf("Searching in array: %d", array);

		mid = (low + high) / 2;

		if (value == array[mid])
		{
			return (mid);
		}
		else if (value > array[mid])
		{
			printf("Searching in array: %d", array);
			low = mid + 1;
		}
		else
		{
			printf("Searching in array: %d", array);
			high = mid - 1;
		}
	}

	return (-1);
}
