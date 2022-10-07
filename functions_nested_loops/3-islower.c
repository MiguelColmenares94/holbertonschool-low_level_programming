#include "main.h"

/**
 * _islower - check if lowercase
 *
 * Description: Print 1 if lower case and 0 if no
 * Return: Always return 0
 */

int _islower(int c)
{

	if ( c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);

}
