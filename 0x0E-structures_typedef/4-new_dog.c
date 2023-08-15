#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: pointer to the memory address
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggie;

	doggie = malloc(sizeof(dog_t));

	if (doggie == NULL)
	{
		return (NULL);
	}
	/*Allocate memory for name and owner strings and copy the contents*/
	doggie->name = malloc(strlen(name) + 1);
	if (doggie->name == NULL)
	{
		free(doggie); /*Clean up if memory allocation fails*/
		return (NULL);
	}
	strcpy(doggie->name, name);

	doggie->owner = malloc(strlen(owner) + 1);
	if (doggie->owner == NULL)
	{
		free(doggie->name); /*Clean up if memory allocation fails*/
		free(doggie);
		return (NULL);
	}
	strcpy(doggie->owner, owner);

	doggie->age = age;

	return (doggie);
}
