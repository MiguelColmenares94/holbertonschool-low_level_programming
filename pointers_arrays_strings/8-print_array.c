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
	int b;

	b = 0;
	while (b < n)
	{
		printf("%d", *(a + b));
			if (b != n - 1)
			{
				printf(", ");
			}
		b++;
	}
	printf("\n");
}
