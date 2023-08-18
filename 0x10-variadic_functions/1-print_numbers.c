#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers -  prints numbers
 * @separator:  string to be printed between numbers
 * @n: number of arguments passed.
 * Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, num;

	va_list(container);

	va_start(container, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(container, int);
		printf("%d", num);
		if (i < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(container);
}
