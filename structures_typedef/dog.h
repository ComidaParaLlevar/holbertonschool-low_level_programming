#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure to define name, age, and owner of dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: it fills the information on a pre-written
 * dentence to present a dog.
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);


#endif
