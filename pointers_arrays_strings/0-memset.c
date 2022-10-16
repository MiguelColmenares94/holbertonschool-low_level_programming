#include "main.h"

/**
 * _memset - fill memory with a constant byte
 * @s: memory area pointed
 * @b: constant byte
 * @n: bytes to be filled
 *
 * Description: fills memory with a constant byte
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	a = 0;
	while (a < n)
	{
		*(s + a) = b;
		a++;
	}
	return (s);
}
