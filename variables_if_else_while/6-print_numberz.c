#include <stdio.h>

/**
 * main - print decimal numbers
 *
 * Description: Print numbers from 0 to 10
 * followed by a new line
 * Return: Always return 0
 */

int main(void)
{
	int a;

	a = 0;

	for (; a < 10; a++)
	{
	putchar(a);
	}
	putchar('\n');
	return (0);
}
