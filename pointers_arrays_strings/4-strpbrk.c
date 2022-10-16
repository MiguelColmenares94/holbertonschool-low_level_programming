#include "main.h"
#include <string.h>
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string to be checked
 * @accept: bytes to search for in s
 *
 * Description: searches a string for any of a set of bytes.
 * Return: pointer to the byte in s that matches one
 * of the bytes in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; *(s + a) != '\0'; a++)
	{
		for (b = 0; *(accept + b) != '\0'; b++)
		{
			if (*(s + a) == *(accept + b))
				return (s + a);
		}
	}
	return ('\0');
}
