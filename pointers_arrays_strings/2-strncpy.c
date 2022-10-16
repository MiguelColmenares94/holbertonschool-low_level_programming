#include "main.h"
#include <string.h>

/**
 * _strncpy - copies a string
 * @dest: destination buffer
 * @src: string to be copy
 * @n: bytes to be used from src
 *
 * Description: copies strings using n bytes adding
 * NULL byte at the end and returning pointer
 * of dest to first value of the string
 * Return: dest[0]
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;
	while (a < n && *(src + a) != '\0')
	{
		*(dest + a) = *(src + a);
		a++;
	}
	while (a < n)
	{
		*(dest + a) = '\0';
		a++;
	}
	return (dest);
}
