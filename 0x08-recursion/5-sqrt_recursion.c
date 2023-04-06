#include "main.h"
/**
 * _root - additional function to check for root
 *@n: the arg int
 *@i: the root int
 *
 *Return: i
 */
int _root(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i < n)
		return (_root(n, i + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the arg int
 *
 *Return: =0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	else
		return (_root(n, 2));
}
