#include <stdio.h>

/**
 * main - print numbers
 *
 * Description: Print numbers of base 16 followed by a new line
 * Return: Always return 0
 */

int main(void)
{

	int c;

	for (c = 48; c <= 57; c++)
	{
	putchar(c);
	}
	for (c = 97; c <= 102; c++)
	{
	putchar(c);
	}
	putchar ('\n');
	return (0);
}
