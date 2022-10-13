#include "main.h"

/**
 * _strcpy - copies a string to a buffer.
 * @dest: buffer
 * @src: strig to be copied
 *
 * Description: Copies the string pointed to by src
 * including the terminating nul bite, to the buffer
 * pointed by dest.
 * Return: dest[0]
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	a = 0;
	while (*(src + a) != '\0')
	{
		(*(dest + a) = *(src + a));
		a++;
	}

	*(dest + a) = *(src + a);
	return (dest);
}
