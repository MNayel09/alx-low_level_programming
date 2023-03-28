#include "main.h"
/**
 * _strlen - return length of string
 * @s: string arg
 *
 * Return: =0
 */
int _strlen(char *s)
{
	int count = 0;
	
	while (s[count] != '\0')
	{
		count++;
	}

	return (count);
}
