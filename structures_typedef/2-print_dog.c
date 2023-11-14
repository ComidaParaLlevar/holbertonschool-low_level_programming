#include "dog.h"
#include <stdio.h>
/**
 * print_dog - pritns a struct dog
 * @d: pointer to struct
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	char *s = "nil";

	if (d->name == 0)
	{
		d->name = "nil";
	}
	if ((*d).owner == 0)
	{
		(*d).owner = "nil";
	}
	if (d == 0)
		return;
	if (d->age == 0)
	{
		printf("Name: %s\nAge: %s\nOwner: %s\n", d->name, s, (*d).owner);
	}
	else
		printf("Name: %s\nAge: %1f\nOwner: %s\n", d->name, d->age, (*d).owner);
}


