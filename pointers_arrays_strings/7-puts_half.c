#include "main.h"
#include <stdio.h>

/**
 *  puts_half - print half of a string
 *  @str: string to be half printed
 *
 *  Description: Get a string and print it's second half
 *  Return: void
 */

void puts_half(char *str)
{
	int a, b;

	a = 0;
	while (*(str + a) != '\0')
	{
		a++;
	}

	b = a / 2;
	if (a % 2 == 1)
	{
		b++;
	}

	a = b;
	while (*(str + a) != '\0')
	{
		_putchar(*(str + a));
		a++;
	}
	_putchar('\n');
}
