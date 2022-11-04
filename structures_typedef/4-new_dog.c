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
	char *newName, newOwner;
	int newNameCopy, newOwnerCopy;
	dog_t *new_dog;
	
	new_dog = malloc(sizeof(dog_t));
	if (!*new_dog)
	{
		return (NULL);
	}
	if (name != NULL)
	{
		newName = malloc(sizeof(name));
		if (!newName)
		{
			free(new_dog);
			return (NULL);
		}
		for (newNameCopy = 0; newNameCopy != '\0'; newNameCopy++)
		{
			*(newName + newNameCopy) = *(name + newNameCopy);

		}
		*(newName + newNameCopy) = *(name + newNameCopy);
		new_dog->name = newName;
	}
	if (owner != NULL)
	{
		newOwner = malloc(sizeof(owner));
		if (!newOwner)
		{
			free(newName);
			free(new_dog);
			return (NULL);
		}
		for (newOwnerCopy = 0; newOwnerCopy != '\0'; newOwnerCopy++)
		{
			*(newOwner + newOwnerCopy) = *(owner + newOwnerCopy);

		}
		*(newOwner + newOwnerCopy) = *(owner + newOwnerCopy);
		new_dog->owner = newOwner;
	}
	if (age >= 0)
	{
		new_dog->age = age;
	}
	return (new_dog);
}

