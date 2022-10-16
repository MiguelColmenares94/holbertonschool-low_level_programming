#include "main.h"
#include <string.h>
/**
 * _strstr -  locates a substring
 * @haystack: string to search in
 * @needle: string to search the substring
 *
 * Description:  locates a substring.
 * Return: pointer to the beginning of the located
 * substring, or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	char *a, *b;

	while (*(haystack) != '\0')
	{
		a = haystack;
		b = needle;
		while (*a == *b && *b != '\0')
		{
			a++;
			b++;
		}
		if (*(b) == '\0')
			return (haystack);
		haystack++;
	}
	return ('\0');
}
