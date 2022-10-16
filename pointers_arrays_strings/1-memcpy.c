#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: memory area destination
 * @src: memory area to be copied
 * @n: bytes to be copied
 *
 * Description: copy memory area to a another memory area
 * Return: pointer to memory area dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	a = 0;
	while (a < n)
	{
		*(dest + a) = *(src + a);
		a++;
	}
	return (dest);
}
