#include "main.h"
/**
 * print_chessboard - prints a string
 * @a: the main string
 *
 * Return: =0
 */
void print_chessboard(char (*a)[8])
{
	int i;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i]);
	}
	_putchar('\n')
}
