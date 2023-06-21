#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner's name
 * Return: returns a new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pup;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	pup = (dog_t *)malloc(sizeof(dog_t));
	if (pup == NULL)
		return (NULL);
	pup->name = (char *)malloc((strlen(name) + 1) * sizeof(char));
	if (pup->name == NULL)
	{
		free(pup);
		return (NULL);
	}
	strcpy(pup->name, name);
	pup->age = age;
	pup->owner = (char *)malloc((strlen(owner) + 1) * sizeof(char));
	if (pup->owner == NULL)
	{
		free(pup->name);
		free(pup);
		return (NULL);
	}
	strcpy(pup->owner, owner);
	return (pup);
}
