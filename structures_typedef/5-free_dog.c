#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>

/**
 * free_dog - free dog
 * @d: string to be freed
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		{
			return;
		}
	free(d->name);
	free(d->owner);
	free(d);
}
