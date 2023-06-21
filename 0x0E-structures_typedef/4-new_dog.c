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
	char *lebitso = name;
	char *master = owner;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	pup = (dog_t *)malloc(sizeof(dog_t));
	if (pup == NULL)
		return (NULL);
	pup->name = (char *)malloc((strlen(lebitso)) * sizeof(char));
	if (pup->name == NULL)
		return (NULL);
	pup->name = lebitso;
	pup->age = age;
	pup->owner = (char *)malloc((strlen(master)) * sizeof(char));
	if (pup->owner == NULL)
		return (NULL);
	pup->owner = master;
	return (pup);
}
