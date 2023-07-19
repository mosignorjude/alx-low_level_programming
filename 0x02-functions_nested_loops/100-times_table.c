#include "main.h"
#include <stdio.h>
/**
 * print_times_table -prints timestable of inputted number
 * @n: parameter
 * Return: void.
 */
void print_times_table(int n)
{
	int i;
	int j;
	int result;

	if (n > 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				result = i * j;

				if (j == 0)
				{
					printf("%d", result);
				}
				else if (result < 10 && j != 0)
				{
					printf(",   %d", result);
				}
				else if (result >= 10 && result < 100)
				{
					printf(",  %d", result);
				}
				else if (result >= 100)
				{
					printf(", %d", result);
				}
			}
			printf("\n");
		}
	}
}
