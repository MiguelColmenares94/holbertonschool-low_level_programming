#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_diagsums -  sum of the two diagonals of a square
 * @a: matrix to check
 * @size: size of matrix
 *
 * Description: prints the sum of the two diagonals
 * of a square matrix of integers.
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int b;
	int diag1, diag2;

	diag1 = diag2 = 0;
	for (b = size - 1; b < (size * size) - 1; b += size - 1)
		diag1 += a[b];
	for (; b >= 0; b -= (size + 1))
		diag2 += a[b];
	printf("%d, %d\n", diag2, diag1);
}
