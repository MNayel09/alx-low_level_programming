#include "main.h"
/**
 * jack_bauer - print 24 hour
 *
 * Return: =0
 */
void jack_bauer(void)
{
	int h, m, i, j, k, l;

	for (h = 0; h < 24; h++)
	{
		i = h / 10;
		j = h % 10;
		for (m = 0; m < 60; m++)
		{
			k = m / 10;
			l = m % 10;
			_putchar(i + '0');
			_putchar(j + '0');
			_putchar(':');
			_putchar(k + '0');
			_putchar(l + '0');
			_putchar('\n');
		}
	}
}
