#include "main.h"
/**
 * more_numbers - prints from 0 to 14
 *
 * Return: =0
 */
void more_numbers(void)
{
	int a = 0, b;

	while (a < 10)
	{
		b = 0;
		while (b < 15)
		{
			if (b > 9)
			{
				_putchar(b / 10 + '0');
			}
			_putchar(b % 10 + '0');
			b++;
		}
		a++;
		_putchar('\n');
	}
}
