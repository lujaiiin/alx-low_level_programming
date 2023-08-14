#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 *struct dog - structure
 *@name: value
 *@age: value
 *@owner: value
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif