#include<stdio.h>
/**
 * main - prints teh number of arguments
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: =0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
