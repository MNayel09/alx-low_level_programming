#include<stdio.h>
/**
 * main - FizzBuzz game
 *
 * Return: =0
 */
int main(void)
{
	int a;

	a = 1;
	while (a < 101)
	{
		if (a % 3 == 0 && a % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", a);
		}
		a++;
		if (a != 100)
		{
			printf(" ");
		}
	}
	putchar('\n');
	return (0);
}
