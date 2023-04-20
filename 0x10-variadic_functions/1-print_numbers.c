#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: the string to be printed between numbers
 * @n: the number of integers
 *
 * Return: =0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list numbers;

	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(numbers, int);
		printf("%d", num);
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(numbers);
}
