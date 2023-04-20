#include "3-calc.h"
/**
 * main - main function
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: =0
 */
int main(int argc, char *argv[])
{
	int (*s)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	s = get_op_func(argv[2]);

	if (!s)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", s(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
