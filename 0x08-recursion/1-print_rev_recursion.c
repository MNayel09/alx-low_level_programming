#include "main.h"
/**
 * _print_rev_recursion - prints string in reverse recursively
 * @s: the arg string
 *
 * Return: =0
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		*s = *s - 1;
		_putchar(*s);
		_print_rev_recursion(s);
	}
	else 
		_putchar('\n');
}
