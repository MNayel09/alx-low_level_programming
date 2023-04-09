#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: popinted memory area
 * @src: replaced memory area
 * @n: the NO.of bytes
 *
 * Return: =0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
