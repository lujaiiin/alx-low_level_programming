#include <stdlib.h>
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
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
