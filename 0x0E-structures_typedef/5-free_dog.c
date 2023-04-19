#include "dog.h"
#include<stdlib.h>
/**
 * free_dog - frees dogs
 * @d: the pointer to struct dog
 *
 * Return: =0
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
