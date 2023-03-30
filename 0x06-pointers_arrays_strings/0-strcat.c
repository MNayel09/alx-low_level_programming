#include "main.h"
#include<string.h>
/**
 * _strcat - concatenates two strings
 * @dest: arg 1
 * @src: arg 2
 *
 * Return: =0
 */
char *_strcat(char *dest, char *src)
{
	int destlen, i;

	destlen = strlen(dest);
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[destlen + i] = src[i];
	}
	dest[destlen + i] = '\0';
	return (dest);
}
