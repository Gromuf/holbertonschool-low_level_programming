#include "dog.h"
#include <stdlib.h>

/**
* free_dog - Frees memory allocated for a dog_t structure.
* @d: Pointer to the dog_t structure to free.
*/
void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
