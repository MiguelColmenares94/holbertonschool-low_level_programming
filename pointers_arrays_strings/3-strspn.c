#include "main.h"
#include <string.h>
/**
 * _strspn -  gets the length of a prefix substring.
 * @s: string to be checked
 * @c: prefix substring to be measured
 *
 * Description:  gets the length of a prefix substring.
 * Return: number of bytes in the initial segment 
 * of s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b, c = 0;

	for (a = 0; *(a + i) != '\0'; a++)
	{
		for (b = 0; *(accept + b) != '\0'; b++)
		{
			if (*(s + a) == *(accept + b))
			{
				c++;
				break;
			}
		}
		if (c != 0 && *(accept + b) == '\0')
			return (c);
	}
	return (0);
}
