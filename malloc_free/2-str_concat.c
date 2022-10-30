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
	int st1, st2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
	{
		s2 = "";
	}

	st1 = strlen(s1);
	st2 = strlen(s2);

	a = malloc(st1 + st2 + 1);
	if (a == 0)
	{
		return (NULL);
	}
	for (st1 = 0; *(s1 + st1) != '\0'; st1++)
	{
		*(a + st1) = *(s1 + st1);
	}
	for (st2 = 0; *(s2 + st2) != '\0'; st2++)
	{
		*(a + (st1 + st2)) = *(s2 + st2);
	}
	*(a + (st1 + st2)) = *(s2 + st2);
	return (a);
}
