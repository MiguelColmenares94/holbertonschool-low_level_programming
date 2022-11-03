#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: struct
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
	{
		return (NULL);
	}

	my_dog->name = name;
	my_dog.age = age;
	my_dog->owner = owner;
}
