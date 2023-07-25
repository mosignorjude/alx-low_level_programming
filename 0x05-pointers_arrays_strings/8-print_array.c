#include "main.h"

/**
 * print_array - prints n numbers of the element in an array
 * @a: the array
 * @n: number of elements to print
 * Return: void.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}

	}
}
