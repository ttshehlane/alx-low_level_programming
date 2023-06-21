#include "dog.h"
#include <stdio.h>

/**
 * free_dog - frees dogs
 * @d: takes in a dog
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
