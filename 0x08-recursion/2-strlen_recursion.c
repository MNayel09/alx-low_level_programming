#include "main.h"
/**
 * _strlen_recursion - print the length of the string recursively
 * @s: the arg string
 *
 * Return: =0
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
