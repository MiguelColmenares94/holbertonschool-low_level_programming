#include "main.h"
#include <stdio.h>

/**
 *  print_array - print n element of array
 *  @a: array pointed
 *  @n: elements to be printed
 *
 *  Description: print n elements of an array of integers
 *  followed by a new line
 *  Return: void
 */

void print_array(int *a, int n)
{
	int a;

	while (a < n)
	{
		printf("%d", *(a + i));
			if (a != n - 1)
			{
				printf(", ");
			}
			printf("\n");
	}
}
