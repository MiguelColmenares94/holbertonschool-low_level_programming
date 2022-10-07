#include "main.h"

/**
 * _isalpha - check if alphabetic
 *@c: the number to be checked
 *
 * Description: Print 1 if alphabetic character and 0 if no
 * Return: Always return 0
 */

int _isalpha(int c)
{

	if ((c >= 97 && c <= 122) || ((c >= 65 && c <= 90)))
	{
		return (1);
	}

	return (0);

}
