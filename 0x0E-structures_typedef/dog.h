#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct dog-data of dog
 * @name:dog's name
 * @age:dog's age
 * @owner:dog's owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* DOG_H */
