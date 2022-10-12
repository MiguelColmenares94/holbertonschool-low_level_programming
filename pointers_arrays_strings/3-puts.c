#include "main.h"

/**
 * _puts - print a string
 * @str: string to be printed
 *
 * Description: Get parameter str and print to stdout
 * return: void
 */


void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
