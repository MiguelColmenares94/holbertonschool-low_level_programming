#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to be calculated
 *
 * Description: returns the natural square root of a number 
 * Return: natural square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (n);
	}
	else
	{
		return (sqrt_n(n,2));
	}
}

int sqrt_n(int n, int count)
{
	if (count * count < n)
	{
		return (sqrt_n(n, count + 1));
	}
	else if (count * count == n)
	{
		return (count);
	}
	else
	{
		return (-1);
	}
}
