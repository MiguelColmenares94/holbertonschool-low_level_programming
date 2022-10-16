#include "main.h"
#include <string.h>

/**
 * reverse_array - reverse an array of integers
 * @a: array to reverse
 * @n: elements to swap
 *
 * Description: reverse the content of an array of integers
 * according to n
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int b, c;

	b = 0;
	while (b < n--)
	{
		c = *(a + b);
		*(a + b) = *(a + n);
		*(a + n) = c;
		b++;
	}
}
