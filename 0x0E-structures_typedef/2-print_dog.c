#include "dog.h"

/**
* print_dog - This function prints a struct named dog.
* @d: Pointer to the struct dog.
*
* Return: void.
*/
void print_dog(struct dog *d)
{
if (d != NULL)
{
	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
}
