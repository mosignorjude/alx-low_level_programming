#include "main.h"
/**
 * times_table - print multiplication of numbers from 0-9
 * Return: void
 */
void times_table(void)
{
	int i;
	int j;
	int result;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			result = i * j;

			if (result > 9)
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
				if (j == 9)
				{
					continue;
				}
				_putchar(',');
			}
			else
			{
				_putchar(result + '0');
				if (j == 9)
				{
					continue;
				}
				_putchar(',');
				_putchar(' ');
			}
			_putchar(' ');
		}
		_putchar('\n');
	}
}
