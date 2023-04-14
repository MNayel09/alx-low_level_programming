#include "main.h"
#include<stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: the arg array
 * @size: the size of the array
 *
 * Return: =0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, j;
	char *a, *b;

	if (nmemb == 0 || size == 0)
		return (NULL);

	i = nmemb * size;
	a = b = malloc(i);

	if (a == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
		*a++ = 0;

	return (b);
}
