#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: arg 1
 * @src: arg 2
 *
 * Return: =0
 */
char *_strcat(char *dest, char *src)
{
	char *out;

	out = (*dest + *src);
	return (out);
}
