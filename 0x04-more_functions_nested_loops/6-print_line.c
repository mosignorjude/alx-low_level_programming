#include "main.h"

/**
 * print_line - print line with(_)
 * @n: numbers of (_) to print
 * Return: void.
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			putchar('_');
		}
		putchar('\n');
	}
	else
	{
		putchar('\n');
	}
}

