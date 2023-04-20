#include "3-calc.h"
/**
 * op_add - adds two int
 * @a: int 1
 * @b: int 2
 *
 * Return: =0
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subs two int
 * @a: int 1
 * @b: int 2
 *
 * Return: =0
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplys two int
 * @a: int 1
 * @b: int 2
 *
 * Return: =0
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides two int
 * @a: int 1
 * @b: int 2
 *
 * Return: =0
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - modulates two int
 * @a: int 1
 * @b: int 2
 *
 * Return: =0
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
