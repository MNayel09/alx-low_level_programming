#include "main.h"
/**
 * _islower - to chek if the letter is lower case
 * @c: user input
 * Return: =0
 */
int _islower(int c)
{
	if (c > 'a' && c < 'z')
		return (1);
	else
		return (0);
	_putchar('\n');
}
