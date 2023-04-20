#include<stdio.h>
#include<stdlib.h>
/**
 * main - prints opcodes of its own
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: =0
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (atoi(argv[1] < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < atoi(argv[1]); i++)
	{
		printf("%02hhx", *((char *)(main + i));
		if (i < atoi(argv[1]) - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
