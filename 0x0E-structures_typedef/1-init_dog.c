#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initializes a variable of type struct dog
 * @d: struct dog as a pointer
 * @name: name of the dog pointer
 * @age: age of the dog as float
 * @owner: the name of own as char pointer
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
