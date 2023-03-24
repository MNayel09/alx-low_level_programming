#include "main.h"
/**
 * print_square - prints a square using #
 * @size: size of the square
 *
 * Return: =0
 */
void print_square(int size)
{
	int a, b;

	a = 0;
	if (size < 1)
		_putchar('\n');
	while (a < size)
	{
		b = 0;
		while (b < size)
		{
			_putchar('#');
			b++;
		}
		_putchar('\n');
		a++;
	}
}
