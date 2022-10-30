#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates two strings.
 * @s1: string1
 * @s2: string2
 *
 * Return: NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *a;
	int b, f;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (b = 0; *(s1 + b) != '\0'; b++)
		;
	for (f = 0; *(s2 + f) != '\0'; f++)
		;
	a = malloc(b + f + 1);
	if (a == 0)
		return (NULL);
	for (b = 0; *(s1 + b) != '\0'; b++)
		a[b] = *(s1 + b);
	for (f = 0; *(s2 + f) != '\0'; f++)
		a[b + f] = *(s2 + f);
	a[i + f] = *(s2 + f);
	return (c);
}

