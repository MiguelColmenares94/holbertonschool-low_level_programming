#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>

/**
 * new_dog - creates a new dog.
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: NULL if fail, pointer to new dog if SUCCESS
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *newName, *newOwner;
	dog_t *ndog;

	ndog = malloc(sizeof(dog_t));

	if (ndog == NULL)
	{
		free(ndog);
		return (NULL);
	}
	if (name != NULL)
	{
		newName = malloc(sizeof(name));
		if (newName == NULL)
		{
			free(newName);
			return (NULL);
		}
		ndog->name = strdup(name);
	}
	if (owner != NULL)
	{
		newOwner = malloc(sizeof(owner));
		if (newOwner == NULL)
		{
			free(newName);
			free(newOwner);
			free(ndog);
			return (NULL);
		}
		ndog->owner = strdup(owner);
	}
	if (age >= 0)
	{
		ndog->age = age;
	}
	return (ndog);
}
