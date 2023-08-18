#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings.
 * @separator: string to be printed between the strings
 * @n: number of arguments passed.
 * Return: void.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;

	va_list(container);
	if (n == 0)
	{
		return;
	}
	va_start(container, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(container, char*);
		if (s == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", s);
		}
		if (i < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(container);
}
