#include "dog.h"
/**
 * init_dog - initializes a variable type struct
 * @d: pointer to struct
 * @name: pointer to name
 * @age: float type age
 * @owner: pointer to name of owner
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
