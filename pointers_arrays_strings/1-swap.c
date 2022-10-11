#include "main.h"

/**
 * swap_int - swap two parameters
 * @p1: address1 of value to be updated
 * @p2: address2 of value to be updated
 *
 * Description: swap the values of p1 and p2
 * return: void
 */


void swap_int(int *p1, int *p2)
{
	int pp = *p1;
	*p1 = *p2;
	*p2 = pp;
}
