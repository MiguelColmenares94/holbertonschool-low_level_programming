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
	int i;
	a = malloc(sizeof(str));
	for (i = 0; i < *(str); i++)
	{
		*(a + i) = *(str + i);
	}

	if (*(str) = NULL)
	{
		return (NULL);
	}

	return (a);

}
