#include "main.h"
/**
 * print_triangle - prints triangleusing #
 * @size: size of the triangle
 *
 * Return: =0
 */
void print_triangle(int size)
{
	int a, b, c;

	a = 0;
	b = size - 1;
	if (size < 1)
		_putchar('\n');
	else
	{
		while (a < size)
		{
			b = size - 1 - a;
			c = a + 1;
			while (b > 0)
			{
				_putchar(' ');
				b--;
			}
			while (c > 0)
			{
				_putchar('#');
				c--;
			}
			_putchar('\n');
			a++;
		}
	}
}
