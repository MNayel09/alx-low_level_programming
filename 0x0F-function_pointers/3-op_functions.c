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
	int add = a + b;
	return (add);
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
	int sub = a - b;
	return (sub);
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
	int mul = a * b;
	return (mul);
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
	int div = a / b;
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (div);
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
	int mod = a % b;
        if (b == 0)
        {
                printf("Error\n");
                exit(100);
        }
	return (mod);
}
