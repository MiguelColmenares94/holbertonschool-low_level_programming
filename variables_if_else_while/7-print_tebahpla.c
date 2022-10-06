#include <stdio.h>

/**
 * main - print the alphabet
 *
 * Description: Print the alphabet inverse
 * in lowercase followed by a new line
 * Return: Always return 0
 */

int main(void)
{

	int c;

	for (c = 'z'; c >= 'a'; c--)
	{
	putchar(c);
	}
	putchar ('\n');
	return (0);
}
