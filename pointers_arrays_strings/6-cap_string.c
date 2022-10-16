#include "main.h"
#include <string.h>

/**
 * cap_string - Capitalize first letters of a string
 * @st: string to be capitalized
 *
 * Description: Capitalize first letters of a string
 * Return: String capitalized
 */

char *cap_string(char *st)
{
	int a;

	a = 0;
	while (st[a] != '\0')
	{
		if (st[a] >= 97 && st[a] <= 122)
		{
			if (a == 0)
				st[a] = st[a] - 32;
			if (st[a - 1] == 32 || st[a - 1] == 9 || st[a - 1] == 10 || st[a - 1] == 44)
			{
				st[a] = st[a] - 32;
			}
			else if (st[a - 1] == 59 || st[a - 1] == 46 || st[a - 1] == 33)
			{
				st[a] = st[a] - 32;
			}
			else if (st[a - 1] == 63 || st[a - 1] == 34 || st[a - 1] == 40)
			{
				st[a] = st[a] - 32;
			}
			else if (st[a - 1] == 41 || st[a - 1] == 123 || st[a - 1] == 125)
			{
				st[a] = st[a] - 32;
			}
		}
	a++;
	}
	return (st);
}
