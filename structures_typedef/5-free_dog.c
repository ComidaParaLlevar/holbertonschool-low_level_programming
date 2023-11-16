#include "dog.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * free_dog - all dogs should have freedom
 *@d: dog (struct) to be freed
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	free((*d).name);
	free((*d).owner);
	free(d);
}

