#include "main.h"
#include <string.h>
/**
 * print_rev - return a string in reverse
 * @s: string to be reversed
 *
 * Description: Get parameter "s" and print string in reverse
 * return: void
 */


void print_rev(char *s)
{
	int l, temp;

	l = strlen(s);
	temp = l - 1;

	while (s[temp] >= 0)
	{
		_putchar(s[temp]);
		temp--;
	}
	_putchar('\n');
}
