#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - sums all its parameters.
 * @n: number of arguments passed.
 * Return: sum
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list container;

	if (n == 0)
	{
		return (0);
	}
	va_start(container, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(container, int);
	}
	va_end(container);
	return (sum);
}
