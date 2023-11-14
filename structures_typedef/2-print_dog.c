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
	char *nil = nil;

	if (d == 0)
		return;

	if (d->name == 0)
		printf("Name: %s\n", nil);
	else
		printf("Name: %s\n", d->name);

	if ((*d).age == 0)
		printf("Age: %s\n", nil);
	else
		printf("Age: %f\n", d->age);

	if (d->owner == 0)
		printf("Owner: %s\n", nil);
	else
		printf("Owner: %s\n", d->owner);
}


