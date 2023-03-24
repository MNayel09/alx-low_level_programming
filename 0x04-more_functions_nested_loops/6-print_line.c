#include "main.h"
/**
 * print_line - prints a straight line using _
 * @n: length of line
 *
 * REturn: =0
 */
void print_line(int n)
{
	int a, b = '_';

	for (a = 1; a <= n; a++)
	{
		_putchar(b);
	}
	_putchar('\n');
}
