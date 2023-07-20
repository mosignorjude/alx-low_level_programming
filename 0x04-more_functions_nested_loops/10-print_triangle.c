#include "main.h"

/**
 * print_triangle - print triangle with(#)
 * @size: size of triangle to print
 * Return: 0.
 */
void print_triangle(int size)
{
	int i, j, loop_count_1, loop_count_2;

	loop_count_1 = size - 1;
	loop_count_2 = 1;

	if (size > 0)
	{
		while (loop_count_1 >= 0 && loop_count_2 <= size)
		{
			for (i = 0; i < loop_count_1; i++)
			{
				_putchar(' ');
			}

			for (j = 1; j <= loop_count_2; j++)
			{
				_putchar('#');
			}
			_putchar('\n');

			loop_count_1--;
			loop_count_2++;
		}
	}
	else
	{
		_putchar('\n');
	}
}

