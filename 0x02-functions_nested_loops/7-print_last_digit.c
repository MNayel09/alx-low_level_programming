#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @j: argument char
 *
 * Return: =0
 */
int print_last_digit(int j)
{
	int i, k;

	i = j % 10;
	if (j < 0)
		i = -i;
	k = '0' + i;
	_putchar(k);
	return (i);
}
