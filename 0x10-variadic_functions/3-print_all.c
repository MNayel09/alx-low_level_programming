#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: list of all arguments
 *
 * Return: =0
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *str;
	va_list args;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i++])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				printf("%s", str != NULL ? str : "(nil)");
				break;
			default:
				continue;
		}
		if (format[i])
			printf(", ");
	}
	printf("\n");
}
