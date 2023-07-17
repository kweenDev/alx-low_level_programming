#include <stdlib.h>
#include "dog.h"

/**
* free_dog - Frees memory allocated for a dog
* @d: Pointer to the struct dog
*
* Return: Void
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
