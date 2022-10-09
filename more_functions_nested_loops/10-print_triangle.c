#include "main.h"

/**
 * print_triangle - print a triangle
 * @size: size of triangle
 *
 * Description: Print a triangle according to the received size
 * Return: void
 */

void print_triangle(int size)
{
	int a, b;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				if (b < (size - b - 1))
					_putchar(' ');
				else
					_putchar('#');
			}
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}


