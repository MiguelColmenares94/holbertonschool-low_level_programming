#include <stdio.h>

/**
 * main - print the alphabet
 *
 * Description: Print the alphabet except letter q and e
 * followed by a new line
 * Return: Always return 0
 */

int main(void)
{

	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
	}
	putchar ('\n');
	return (0);
}
