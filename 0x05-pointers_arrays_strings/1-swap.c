#include "main.h"
/**
 * swap_int - swap two integers
 * @a: arg 1
 * @b: arg 2
 *
 * Return: =0
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
