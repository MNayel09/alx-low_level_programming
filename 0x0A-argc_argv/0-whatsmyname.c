#include<stdio.h>
/**
 * main - prints the name called by
 * @argc: count of arguments
 * @argv: the arg vector
 *
 *Return: =0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
