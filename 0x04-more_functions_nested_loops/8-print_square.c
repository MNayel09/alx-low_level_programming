#include "main.h"
/**
 * print_square - prints a square using #
 * @size: size of the square
 *
 * Return: =0
 */
void print_square(int size)
{
	int a, b = '#';

	for (a = 1; a <= size; a++)
	{
		_putchar(b);
	}
	_putchar('\n');
}
