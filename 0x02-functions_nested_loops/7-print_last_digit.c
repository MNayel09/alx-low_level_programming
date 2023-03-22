#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @j: argument char
 *
 * Return: =0
 */
int print_last_digit(int j)
{
	int i = j % 10;

	for (i = 0; i < 2; i++)
	{
		if (j >= 0)
		return (i);
		else if (j < 0)
		return (i);
	}
	return (0);
}
