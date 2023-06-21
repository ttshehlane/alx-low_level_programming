#ifndef DOG_H
#define DOG_H
/**
 * struct dog - represents a dogs information
 * @name: dog's name
 * @age: dog's age
 * @owner: the owners name
 *
 * Description: This structure represents a dog and stores
 * its information, name, age, owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

/* void free_dog(dog_t *d) */

#endif /* DOG_H */
