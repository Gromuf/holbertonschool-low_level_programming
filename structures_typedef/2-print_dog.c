#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints a struct dog
 * @d: A pointer to the struct dog to be printed
 *
 * Description: This function prints the details of a struct dog.
 *              If a member is NULL,
 * it prints "(nil)" instead of the member value.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)\n");
	if (d->age)
		printf("Age: %f\n", d->age);
	else
		printf("Age: (nil)\n");
	if (d->owner)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nil)\n");
}
