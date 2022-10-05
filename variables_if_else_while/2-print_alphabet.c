#include <stdio.h>

/**
 * main - print the alphabet
 *
 * Description: Print the alphabet followed by a new line
 * Return: Always return 0
 */

int main(void)
{

	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
	putchar(c);
	}
	putchar ('\n');
	return (0);
}
