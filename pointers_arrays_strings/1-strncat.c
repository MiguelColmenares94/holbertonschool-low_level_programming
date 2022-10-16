#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: string to be concatenated
 * @n: bytes to be used from src
 *
 * Description: concatenates two strings using n bytes adding
 * NULL byte at the end and returning pointer
 * of dest to first value of the string
 * Return: dest[0]
 */

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int size = strlen(dest);

	a = 0;
	while (a < n && *(src + a) != '\0')
	{
		*(dest + (size + a)) = *(src + a);
		a++;
	}
	*(dest + (size + a)) = '\0';
	return (dest);
}
