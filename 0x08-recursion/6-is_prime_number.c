#include "main.h"
/**
 * is_prime_number - returns 1 if int is prime
 * @n: the arg int
 *
 * Return: =0
 */
int is_prime_number(int n)
{
	if (n / n == 1 && n % 10 == 0)
		return (1);
	else
		return (0);
}
