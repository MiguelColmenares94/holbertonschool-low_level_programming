#include <stdio.h>

/**
 * main - print the alphabet
 *
 * Description: Print the alphabet in lower and uppercase followed by a new line
 * Return: Always return 0
 */

int main(void)
{

	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
	putchar(c);
	}
	for (c = 'A'; c <= 'Z'; c++)
	{
	putchar(c);
	}
	putchar ('\n');
	return (0);
}
