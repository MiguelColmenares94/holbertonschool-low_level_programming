#include "main.h"
#include <string.h>

/**
 * leet - encodes into 1337
 * @st: string to be encoded
 *
 * Description: encodes a string into 1337
 * Return: string encoded
 */

char *leet(char *st)
{
	int a, b;
	int ar1[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int ar2[] = {'4', '3', '0', '7', '1'};

	a = 0;
	while (*(st + a) != '\0')
	{
		b = 0;
		while (b < 10)
		{
			if (*(st + a) == ar1[b])
			{
				*(st + a) = ar2[b / 2];
				b = 10;
			}
		b++;
		}
	a++;
	}
	return (st);
}
