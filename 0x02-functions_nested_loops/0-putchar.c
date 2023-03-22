#include<stdio.h>
/**
 * main - print _putchar
 *
 * Return: =0
 */
int main(void)
{
	char st[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
	putchar(st[i]);
	}
	putchar('\n');
	return (0);
}
