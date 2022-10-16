#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: string to be concatenated
 *
 * Description: concatenates two strings adding NULL byte
 * at the end and returning pointer of dest to first value
 * of the string
 * Return: dest[0]
 */

char *_strcat(char *dest, char *src)
{
	int count, a;

	count = 0;
	while (*(dest + count) != '\0')
	{
		count++;
	}

	a = 0;
	while (*(src + a) != '\0')
	{
		*(dest + count) = *(src + a);
		count++;
		a++;
	}
	*(dest + count) = '\0';
	return (dest);
}
