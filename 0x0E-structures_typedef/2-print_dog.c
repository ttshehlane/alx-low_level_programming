#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - prints the struct of dog
 * @d: the dog informatrion in struct
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(1);
	if (d->name == NULL)
		printf("Name: (nil)\n");
	if (d->age == 0)
		printf("Age: (nil)\n");
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	if (d->name != NULL || d->age != 0 || d->owner != NULL)
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
