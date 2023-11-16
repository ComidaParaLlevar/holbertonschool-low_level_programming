#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates new dog struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: struct new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *canis;
	int nlen, olen;

	if (name != NULL && owner != NULL)
	{
		nlen = _strlen(name) + 1;
		olen = _strlen(owner) + 1;
		
		canis = malloc(sizeof(dog_t));

		if (canis == NULL)
		{
			free(canis);
			return (NULL);
		}

		(*canis).name = malloc(sizeof(char) * nlen);

		if ((*canis).name == NULL)
		{
			free((*canis).name);
			free(canis);
			return (NULL);
		}

		(*canis).owner = malloc(sizeof(char) * olen);

		if ((*canis).owner == NULL)
		{
			free((*canis).owner);
			free(canis);
			return (NULL);
		}

		(*canis).name = _strcpy((*canis).name, name);
		(*canis).owner = _strcpy((*canis).owner, owner);
		(*canis).age = age;
	}
	return (canis);
}

/**
  * _strlen - Returns the length of string
  * @s: String to count
  *
  * Return: String length
  */
int _strlen(char *l)
{
	int c = 0;

	for (; *l != '\0'; l++)
	{
		c++;
	}

	return (c);
}

/**
  * _strcpy - Copy a string
  * @dest: Destination of string
  * @src: Source of string
  *
  * Return: pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}
