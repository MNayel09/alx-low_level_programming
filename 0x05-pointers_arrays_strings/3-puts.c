#include "main.h"
/**
 * _puts - print an array of strings
 * @str: array arg
 * 
 * Return: =0
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
