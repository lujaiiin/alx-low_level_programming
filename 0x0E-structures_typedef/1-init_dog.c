#include <stdio.h>
#include "dog.h"

/**
 *init_dog - function
 *@d: value
 *@name: value
 *@owner: value
 *@age: value
 *Return: always
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
