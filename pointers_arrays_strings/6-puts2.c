#include "main.h"

/**
 * puts2 - print every other character
 * @str: string to be printed
 *
 * Description: Prints every other character, starting from
 * the first and followed by a new line
 * return: void
 */

void puts2(char *str)
{
	int a;

	for (a = 0; *(str + a) != '\0'; a++)
	{
		_putchar(*(str + a));
	if (*(str + a + 1) != '\0')
		a++;
	}
	_putchar('\n');
}
