#include "main.h"
#include <string.h>
/**
 * _strchr -  locates a character in a string.
 * @s: string to be checked
 * @c: character to be located
 *
 * Description:  locates a character in a string.
 * Return: s[first occurrence of c]
 */


char *_strchr(char *s, char c)
{
	int a;

	a = 0;
	while (*(s + a) >= '\0')
	{
		if (*(s + a) == c)
		{
			return ((s + a));
		}
		a++;
	}
	return ('\0');

}
