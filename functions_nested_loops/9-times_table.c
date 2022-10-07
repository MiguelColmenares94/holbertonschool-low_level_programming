#include "main.h"

/**
 * times_table - print table
 *
 * Description: Print 9 times table
 * Return: void
 */

void times_table(void)
{
	int file, column;

	file = 0;

	while (file <= 9)
	{
	column = 0;

	while (column <= 9)
	{	
		_putchar((file * column));
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		column++;
	}
	_putchar('\n');
	file++;
	}
}
