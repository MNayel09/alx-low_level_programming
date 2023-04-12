#include<stdio.h>
#include<stdlib.h>
/**
 * main - adds positive numbers
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: =0
 */
int main(int argc, char *argv[])
{
	int i, add = 0;

	for (i = 1; i < argc; i++)
	{
		if (argv > '0' && argv < '9')
		{
			add += atoi(argv[i]);
			printf("%d\n", add);
		}
		else if (argc < 2)
		{
			printf("0\n");
		}
		else
		{
			printf("Error\n");
		}
	}
	return (0);
}
