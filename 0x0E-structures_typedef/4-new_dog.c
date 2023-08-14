#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * cpy - function
 * @d: value
 * @s: value
 * Return: pointer
 */

char *cpy(char *d, char *s)
{
	int l, i;

	l = 0;

	while (s[l] != '\0')
	{
		l++;
	}

	for (i = 0; i < l; i++)
	{
		d[i] = s[i];
	}
	d[i] = '\0';

	return (d);
}

/**
 * lenght - function
 * @s: value
 * Return: always
 */

int lenght(char *s)
{
	int i = 0;
	int ad = 0;

	while (s[i] != '\0')
	{
		ad++;
		i++;
	}
	return (ad);
}

/**
 * new_dog - function
 * @name: value
 * @age: value
 * @owner: value
 * Return: always
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;
	int l1, l2;

	l1 = lenght(name);
	l2 = lenght(owner);

	p = malloc(sizeof(dog_t));

	if (p == NULL)
	{
		return (NULL);
	}

	p->name = malloc(sizeof(char) * (l1 + 1));

	if (p->name == NULL)
	{
		free(p);
		return (NULL);
	}

	p->owner = malloc(sizeof(char) * (l2 + 1));

	if (p->owner == NULL)
	{
		free(p);
		free(p->name);
		return (NULL);
	}

	cpy(p->name, name);
	cpy(p->owner, owner);
	p->age = age;

	return (p);
}
