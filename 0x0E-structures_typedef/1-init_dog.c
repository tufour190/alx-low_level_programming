#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - variable initialization of type struct dog
 * @d: pointer to type struct dog
 * @name: member for initialization
 * @age: member for initialization
 * @owner: member for initialization
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
