#include "main.h"
#include <string.h>

/**
 * string_toupper - change lowercase to uppercase
 * @string: string to be change
 *
 * Description: change lowercase to uppercase
 * Return: string in uppercase
 */

char *string_toupper(char *string)
{
	int a;

	a = 0;
	while (*(string + a) != '\0')
	{
		if (*(string + a) >= 97 && *(string + a) <= 122)
			*(string + a) -= 32;
		a++;
	}
	return (string);
}
