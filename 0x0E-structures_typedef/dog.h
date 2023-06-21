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
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif /* DOG_H */
