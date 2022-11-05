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
	dog_t *new_dog;
	
	new_dog = malloc(sizeof(dog_t));
	newName = malloc(sizeof(name));
	newOwner = malloc(sizeof(owner));

	char* strcpy(char* newName,const char* name);
	char* strcpy(char* newOwner,const char* owner);
	
	if (!new_dog)
	{
		return (NULL);
	}
	if (name != NULL)
	{
		if (!newName)
		{
			free(new_dog);
			return (NULL);
		}
		new_dog->name = newName;
	}
	if (owner != NULL)
	{
		if (!newOwner)
		{
			free(newName);
			free(new_dog);
			return (NULL);
		}
		new_dog->owner = newOwner;
	}
	if (age >= 0)
	{
		new_dog->age = age;
	}
	return (new_dog);
}

