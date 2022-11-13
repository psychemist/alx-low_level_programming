#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - creates a new dog struct
 * @name: string that stores name of new dog
 * @age: integer value of age of new dog
 * @owner: string that stores name of owner of new dog
 * Return: pointer to struct that contains information of new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	else
	{
		dog->name = name;
		dog->age = age;
		dog->owner = owner;
	}

	return (dog);
}
