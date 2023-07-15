#include <stdio.h>
/**
 * main- entry point
 * Return: always return 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			putchar(i);
			putchar(j);
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
