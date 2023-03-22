#include "main.h"
/**
 * print_sign - print sign
 * @n: argument char
 *
 * Return: =0
 */
int print_sign(int n)
{
	int a = '+';
	int b = '0';
	int c = '-';

	if (n > 0)
	{
		_putchar(a);
		return ('+');
	} else if (n == 0)
	{
		_putchar(b);
		return (0);
	} else if (n < 0)
	{
		_putchar(c);
		return ('-');
	}
	_putchar('\n');
	return (0);
}
