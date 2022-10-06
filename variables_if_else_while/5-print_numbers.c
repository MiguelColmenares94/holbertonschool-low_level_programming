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

	while (a < 10)
	{
		printf("%d", a);
		a++;
	}
	printf("\n");
	return (0);
}
