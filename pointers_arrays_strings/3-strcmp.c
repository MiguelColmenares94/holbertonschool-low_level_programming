#include "main.h"
#include <string.h>

/**
 * _strcmp - copare two strings
 * @s1: first string
 * @s2: second string
 *
 * Description: compares two strings
 * Return: an integer
 */

int _strcmp(char *s1, char *s2)
{
	 int a;

	a = 0;
	while (*(s1 + a) == *(s2 + a))
	{
		if (*(s1 + a) == '\0')
		{
			return (0);
		}
		a++;
	}
	return (*(s1 + a) - *(s2 + a));
}
