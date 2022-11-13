#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen - returns the length of passed string
 * @s: pointer to a char
 * Return: length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}

/**
 * _strcpy - copies a source string to a destination pointer
 * @src: pointer to an array of chars
 * @dest: pointerto a char
 * Return: destination string
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
        dest[i] = '\0';

	return (dest);
}

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
	char *name_copy;
	char *owner_copy;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);
	
	dog->age = age;

	name_copy = malloc(_strlen(name) + 1);
	if (name_copy == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->name = _strcpy(name_copy, name);

	owner_copy = malloc(_strlen(owner) + 1);
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(dog);
		return (NULL);
	}
	dog->owner = _strcpy(owner_copy, owner);

	return (dog);
}
