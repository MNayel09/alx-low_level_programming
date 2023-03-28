#include<string.h>
#include "main.h"
/**
 * print_rev - print string in reverse
 * @s: string arg
 *
 * Return: =0
 */
void print_rev(char *s)
{
	int count = strlen(s);
	int i;

	for (i = count - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
