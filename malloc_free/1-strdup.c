#include "main.h"
#include <stdlib.h>

/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 *@str: given string
 *
 * Return: pointer to a newly allocated space in memory
 */

char *_strdup(char *str)
{
	char *a;
	int b;

	if (str == NULL)
		return (NULL);
	for (b = 0; *(str + b) != '\0'; b++)
		;
	a = malloc(b + 1);
	if (a == 0 || a == NULL)
		return (NULL);
	for (b = 0; *(str + b) != '\0'; b++)
	{
		a[b] = *(str + b);
	}
	a[b] = *(str + b);
	return (a);
}
