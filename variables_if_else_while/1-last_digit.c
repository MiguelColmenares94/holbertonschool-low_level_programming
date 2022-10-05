#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print last digit
 * 
 * Description: Print last digit of n followed by certaing string if n>5, n==0 or 6<=n!=0  
 * Return: Always 0
 */


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n%10);
	}
	else if (n==0)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n%10);
	}
	else if (6<=n!=0)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n%10);
	}
	else
	return (0);
}
