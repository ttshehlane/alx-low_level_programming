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
	else if (d->name == NULL)
		printf("Name: (nil)\n");
	else if (d->age == 0)
		printf("Age: (nil)\n");
	else if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Name: %s\nAge: %.1f\nOwner: %s\n", d->name, d->age, d->owner);
}
