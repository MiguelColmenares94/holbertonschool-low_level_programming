#include "main.h"

/**
 * more_numbers - print numbers
 *
 * Description: Print numbers from 0 to 14 followed by a newline
 * Return: Always return 0
 */

void more_numbers(void)
{
	int a;
	int b;

	b = 0;
	while (b < 10)
	{
		a = 0;

		while (a <= 14)
		if (a < 10)
		{
			_putchar(a);
			a++;
		} else
		{
		_putchar('a / 10');
		_putchar('a % 10');
		a++;
		}
		_putchar('\n')
		b++;
	}
}
