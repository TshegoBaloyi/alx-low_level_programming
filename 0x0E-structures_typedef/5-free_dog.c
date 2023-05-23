#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated for a struct dog
 * @e: struct dog to free
 */
void free_dog(dog_t *e)
{
	if (e)
	{
		free(e->name);
		free(e->owner);
		free(e);
	}
}
