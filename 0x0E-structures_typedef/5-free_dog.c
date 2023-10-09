#include "dog.h"

/**
* free_dog - Frees the memory allocated for data about a dog.
* @d: Pointer to the struct dog.
*
* Return: void.
*/
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
