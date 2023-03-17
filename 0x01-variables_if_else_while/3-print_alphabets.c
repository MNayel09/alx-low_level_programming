#include<stdio.h>
/**
 * main - main alphabet lower and upper
 *
 * Return: =0
 */
int main(void)
{
	char ch;
	char CH;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (CH = 'A'; CH <= 'Z'; CH++)
	{
		putchar(CH);
	}
	return (0);
}
