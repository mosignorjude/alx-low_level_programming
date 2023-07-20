#include "main.h"

/**
 * print_diagonal - print daigonal line with(\)
 * @n: numbers of (_) to print
 * Return: void.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('\\');
			_putchar('\n');
			_putchar(' ');
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	else if (n <= 0)
	{

		_putchar('\n');
	}
}

