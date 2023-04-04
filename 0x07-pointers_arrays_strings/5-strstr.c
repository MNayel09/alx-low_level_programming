#include<stdlib.h>
#include "main.h"
/**
 * _strstr - locates a sub-string in a string
 * @haystack: the main string
 * @needle: the sub-string
 *
 * Return: =0
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int s = 0;

	while (needle[s] != '\0')
		s++;
	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != s)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
