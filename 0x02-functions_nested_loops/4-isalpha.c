#include "main.h"
/**
 * _isalpha - check if alpha
 * @c: argument to check
 *
 * Return: =0
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= 0)
		return (1);
	else
		return (0);
	_putchar('\n');
}
