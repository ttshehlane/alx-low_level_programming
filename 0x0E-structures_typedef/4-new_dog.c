#include "dog.h"
#include <stdlib.h>

/**
 * strlen - determines the length of string
 * @s: array of char
 * Return: int
 */
int _strlen(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		s++;
		c++;
	}
	return c;
}

/**
 * _strncpy - copys text from one array to another
 * @dest: destination of the array
 * @src: array source
 * @n:the size of src
 * Return: Always 0 (success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}

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
	pup->name = (char *)malloc((_strlen(name) + 1) * sizeof(char));
	if (pup->name == NULL)
	{
		free(pup);
		return (NULL);
	}
	_strncpy(pup->name, name, _strlen(name) + 1);
	pup->age = age;
	pup->owner = (char *)malloc((_strlen(owner) + 1) * sizeof(char));
	if (pup->owner == NULL)
	{
		free(pup->name);
		free(pup);
		return (NULL);
	}
	_strncpy(pup->owner, owner, _strlen(owner) + 1);
	return (pup);
}
