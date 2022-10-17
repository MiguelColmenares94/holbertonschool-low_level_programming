#include "main.h"
#include <string.h>
/**
 * print_chessboard -  prints the chessboard.
 * @a: pointer to array
 *
 * Description: prints the chessboard.
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int b, c;

	b = 0;
	while (b < 8)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar(a[b][c]);
		}
		b++;
		_putchar('\n');
	}
}
