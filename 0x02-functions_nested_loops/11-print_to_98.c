#include "main.h"
#include <stdio.h>
/**
 * print_to_98 -prints numbers to 98
 * @n: parameter
 * Return: void.
 */
void print_to_98(int n)
{
	int max;

	max = 98;

	if (n == 0)
	{
		while (n <= max)
		{
			if (n == 98)
			{
			printf("%d", n);
			}
			else
			{
				printf("%d, ", n);
			}
			n++;
		}
	}
	else if (n > 0 && n <= max)
	{
		while (n <= max)
		{
			if (n == 98)
			{
			printf("%d", n);
			}
			else
			{
				printf("%d, ", n);
			}
			n++;
		}
	}
	else if (n < 0)
	{
		while (n <= max)
		{
			if (n == 98)
			{
			printf("%d", n);
			}
			else
			{
				printf("%d, ", n);
			}
			n++;
		}
	}
	else if (n > max)
	{
		while (n >= max)
		{
			if (n == 98)
			{
			printf("%d", n);
			}
			else
			{
				printf("%d, ", n);
			}
			n--;
		}
	}
	_putchar('\n');
}
