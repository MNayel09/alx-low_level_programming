#include "dog.h"
#include<stdlib.h>
/**
 * dog_t - creates a new dog
 * @new_dog: pointer to dog_t
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 *
 * Return: =0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, length_name, length_owner;
	struct dog *new_dog;

	length_name = 0;
	while (name[length_name] != '\0')
		length_name++;
	length_owner = 0;
	while (owner[length_owner] != '\0')
		length_owner++;
	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = malloc(length_name + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		free(new_dog->name);
		return (NULL);
	}
	new_dog->owner = malloc(length_owner + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog);
		free(new_dog->name);
		free(new_dog->owner);
		return (NULL);
	}
	for (i = 0; i <= length_name; i++)
		new_dog->name[i] = name[i];
	for (i = 0; i <= length_owner; i++)
		new_dog->owner[i] = owner[i];
	new_dog->age = age;
	return (new_dog);
}
