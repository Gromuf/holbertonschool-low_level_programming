#include "dog.h"
#include <stddef.h>

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: A pointer to the struct dog to be initialized
 * @name: The name to initialize the dog with
 * @age: The age to initialize the dog with
 * @owner: The owner to initialize the dog with
 *
 * Description: This function initializes the members of a struct dog
 *              with the provided name, age, and owner. If the pointer
 *              to struct dog is NULL, the function does nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
