#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dog
 * @d: pointer to struct dog
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}

