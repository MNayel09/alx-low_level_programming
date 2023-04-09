#include "main.h"
#include<string.h>
/**
 * _strncat - concatenates tow strings
 * @dest: arg1
 * @src: arg2
 * @n: arg3
 *
 * Return: =0
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, destlen = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[destlen + i] = src[i];
	dest[destlen + i] = '\0';
	return (dest);
}
