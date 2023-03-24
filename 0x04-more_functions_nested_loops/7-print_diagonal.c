#include "main.h"
/**
 * print_diagonal - prints a diagonal line using \
 * @n: length of line
 *
 * Return: =0
 */
void print_diagonal(int n)
{
	int a, b = 92;

	for (a = 1; a <= n; a++)
		{
			_putchar(b);
		}
	_putchar('\n');
}
