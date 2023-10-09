#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
* struct dog - A dog's basic info
* @name: Parameter for the name
* @age: Parameter for the age
* @owner: The owner
*
* Description: Function prototype definitions
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}
dog_t;

/* Function Prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif /* DOG_H */
