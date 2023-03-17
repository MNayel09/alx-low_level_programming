#include<stdio.h>
/**
 * main - alphabet in revers
 *
 * Return: =0
 */
int main(void)
{
	char hc;

	for (hc = 'z'; hc >= 'a'; hc--)
	{
		putchar(hc);
	}
	putchar('\n');
	return (0);
}
