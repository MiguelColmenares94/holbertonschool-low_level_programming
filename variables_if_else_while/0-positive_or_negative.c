#include <stdlib.h>
#include <time.h>

/**
 * main - print positive or negative
 *
 * Description: Analize variabe n and print positive, negative or zero
 * Return: Always return 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		pritnf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero \n", n);
	}
	else
	{
		printf("%d is negative \n", n);
	}
	return (0);
}
