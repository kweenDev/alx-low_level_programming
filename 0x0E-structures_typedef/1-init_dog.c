#include <stdlib.h>
#include "dog.h"

/**
* init_dog - Initializes a struct dog
* @d: Pointer to the struct dog
* @name: Name of the dog
* @age: Age of the dog
* @owner: owner to initialize
*
* Return: Void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
