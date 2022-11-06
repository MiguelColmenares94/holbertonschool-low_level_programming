#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sum all parameters
 *
 * @n: parameters
 * Return: if n = 0 then 0, else sum parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int a, add;

	if (n == 0)
		return (0);
	va_start(numbers, n);
	add = 0;
	for (a = 0; a < n; a++)
		add += va_arg(numbers, int);
	va_end(numbers);
	return (add);
}


