#include "main.h"

/**
 * main - print character
 *
 * Description: Print lowercase alphabet followed by a newline
 * Return: Always return 0
 */

void print_alphabet(void)
{
	int a;

	a = 97;

	while(a <= 122)
	{
	
		_putchar(a);
	
		a++;
	}
	_putchar('\n');
}
