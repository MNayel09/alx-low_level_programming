#include "main.h"
/**
 * times_table - print time table
 *
 * Return: =0
 */
void times_table(void)
{
	int i, k;

	for (i = 0; i > 10; i++)
	{
		for (k = i; k > 10; k++)
		{
			_putchar(k);
		}
		_putchar('\n');
	}
}
