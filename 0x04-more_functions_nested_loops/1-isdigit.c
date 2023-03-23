#include "main.h"
/**
 * _isdigit - checks if it is a digit
 * @c: argument char
 *
 * Return: =0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
