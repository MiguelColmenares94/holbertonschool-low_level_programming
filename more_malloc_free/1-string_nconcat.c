#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: string1
 * @s2: string2
 * @n: bytes of string2 to use
 *
 * Return: pointer to resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int b, c, d;

	if (s1 == NULL)
	{
		b = 0;
	}
	else
	{
		for (b = 0; *(s1 + b) != '\0'; b++)
			;
	}
	if (s2 == NULL)
	{
		c = 0;
	}
	else
	{
		for (c = 0; *(s2 + c) != '\0'; c++)
			;
		if (n < c)
			c = n;
	}
	c += b;
	a = malloc(sizeof(char) * (c + 1));
	if (a == NULL)
		return (NULL);
	for (d = 0; d < b; d++)
		a[d] = *(s1 + d);
	for (b = 0; d < c; b++)
		a[d++] = *(s2 + b);
	a[d] = '\0';
	return (a);
}
