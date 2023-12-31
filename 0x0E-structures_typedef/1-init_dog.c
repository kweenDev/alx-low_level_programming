#include "dog.h"

/**
* init_dog - Initializes a struct named dog.
* @d: Pointer to the struct dog.
* @name: The name of the dog.
* @age: The age of the dog.
* @owner: The owner to be initialize.
*
* Return: void.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
